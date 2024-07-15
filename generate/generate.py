import argparse
from functools import partial
import os
import sys
from typing import Any, Dict, List, Union
from multiprocessing import Pool

if sys.version_info >= (3, 11):
    import tomllib
else:
    import tomli as tomllib

import hog
from hog import *
from hog.operator_generation import *


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate C++ code and CMake build files for all operators specified in a TOML file."
    )

    parser.add_argument("filename", help="Path to the TOML file.")
    parser.add_argument(
        "-o", "--output", required=True, help="Path to output directory."
    )

    parser.add_argument(
        "--clang-format-binary",
        default="clang-format",
        help=f"Allows to specify the name of the clang-format binary and/or optionally its full path."
        f" By default 'clang-format' will be used.",
    )

    parser.add_argument(
        "--cmake-only",
        action="store_true",
        help="Generates cmake files from existing source and header files and quits.",
    )

    parser.add_argument(
        "--processes",
        action="store",
        type=int,
        default=1,
        help="Generates kernels in parallel with the specified number of processes.",
    )

    return parser.parse_args()


def unfold_toml_dict(toml_dict):
    toml_dict_unfolded = {}

    for form_str, operators in toml_dict.items():
        operators_unfolded = []
        for operator in operators:
            if "components-trial" in operator and "components-test" in operator:
                for comp_test in operator["components-test"]:
                    for comp_trial in operator["components-trial"]:
                        operator_cleared = operator.copy()
                        operator_cleared.pop("components-trial")
                        operator_cleared.pop("components-test")
                        if "form-args" not in operator_cleared:
                            operator_cleared["form-args"] = {}
                        operator_cleared["form-args"].update(
                            {"component_test": comp_test}
                        )
                        operator_cleared["form-args"].update(
                            {"component_trial": comp_trial}
                        )
                        operators_unfolded.append(operator_cleared)
            elif "components" in operator:
                for comp in operator["components"]:
                    operator_cleared = operator.copy()
                    operator_cleared.pop("components")
                    if "form-args" not in operator_cleared:
                        operator_cleared["form-args"] = {}
                    operator_cleared["form-args"].update({"component_index": comp})
                    operators_unfolded.append(operator_cleared)
            else:
                operators_unfolded.append(operator)
        toml_dict_unfolded[form_str] = operators_unfolded
    return toml_dict_unfolded


def main() -> None:
    args = parse_args()

    os.makedirs(args.output, exist_ok=True)

    if not args.cmake_only:
        with open(args.filename, "rb") as f:
            toml_dict = tomllib.load(f)
            toml_dict = unfold_toml_dict(toml_dict)

            with Pool(args.processes) as pool:
                async_results = []
                for form_str, operators in toml_dict.items():
                    for spec in operators:
                        ret = pool.apply_async(
                            generate_operator, (args, form_str, spec)
                        )
                        async_results.append(ret)
                # Getting exceptions
                for ar in async_results:
                    ar.get()
                pool.close()
                pool.join()

    generate_cmake_from_cpp_files(args.output)


def generate_cmake_from_cpp_files(output_dir_path: str):
    """Generates all required cmake files just from the present files and folder structure."""
    toplevel_cmake_output_path = os.path.join(output_dir_path, "CMakeLists.txt")

    def list_subdirectories(directory) -> List[str]:
        subdirectories = []
        for item in os.listdir(directory):
            item_path = os.path.join(directory, item)
            if os.path.isdir(item_path):
                subdirectories.append(item_path)
        return sorted(subdirectories)

    subdirs = list_subdirectories(output_dir_path)

    with open(toplevel_cmake_output_path, "w") as f:
        print(f'add_compile_options( "-Wno-shadow" )', file=f)
        print(f"", file=f)
        print(f"if(NOT WALBERLA_DOUBLE_ACCURACY)", file=f)
        print(f'   add_compile_options( "-Wno-float-conversion" )', file=f)
        print(f'   add_compile_options( "-Wno-implicit-float-conversion" )', file=f)
        print(f"endif()", file=f)
        print(f"", file=f)
        print(f'add_compile_options( "-Wno-unused-variable" )', file=f)
        print(f"", file=f)

        for subdir in subdirs:
            print(f"add_subdirectory({os.path.basename(subdir)})", file=f)

    for subdir in subdirs:
        lib_name = f"opgen-{os.path.basename(subdir)}"

        with open(os.path.join(subdir, "CMakeLists.txt"), "w") as f:
            print(f"add_library( {lib_name}", file=f)
            print(f"", file=f)

            for xpp_file in sorted(
                [x for x in os.listdir(subdir) if x.endswith((".hpp", ".cpp"))]
            ):
                print(f"   {xpp_file}", file=f)

            print(f")", file=f)
            print(f"", file=f)

            noarch_dir = os.path.join(subdir, "noarch")
            if not os.path.isdir(noarch_dir):
                raise FileNotFoundError(f"noarch dir not found under {noarch_dir}")

            noarch_cpp_files = sorted(
                [
                    cppfile
                    for cppfile in os.listdir(noarch_dir)
                    if cppfile.endswith(".cpp")
                ]
            )

            def print_noarch_targets(avx_exists: bool):
                indent_noarch_source_file = "   " if avx_exists else ""
                print(
                    f"{indent_noarch_source_file}target_sources({lib_name} PRIVATE",
                    file=f,
                )
                print(f"", file=f)

                for source_file_inner in noarch_cpp_files:
                    print(
                        f"{indent_noarch_source_file}   noarch/{source_file_inner}",
                        file=f,
                    )

                print(f"{indent_noarch_source_file})", file=f)

            if os.path.isdir(os.path.join(subdir, "avx")):
                avx_cpp_files = sorted(
                    [
                        cppfile
                        for cppfile in os.listdir(os.path.join(subdir, "avx"))
                        if cppfile.endswith(".cpp")
                    ]
                )

                print(f"if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)", file=f)
                print(f"   target_sources({lib_name} PRIVATE", file=f)
                print(f"", file=f)

                for source_file in avx_cpp_files:
                    print(f"      avx/{source_file}", file=f)

                for source_file in noarch_cpp_files:
                    if not source_file in avx_cpp_files:
                        print(f"      noarch/{source_file}", file=f)

                print(f"   )", file=f)
                print(f"", file=f)

                print(f"   set_source_files_properties(", file=f)
                print(f"", file=f)

                for source_file in avx_cpp_files:
                    print(f"      avx/{source_file}", file=f)
                print(f"", file=f)
                print(
                    "      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}",
                    file=f,
                )

                print(f"   )", file=f)
                print(f"else()", file=f)
                print(
                    f"   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)",
                    file=f,
                )
                print(
                    f'      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")',
                    file=f,
                )
                print(f"   endif()", file=f)
                print(f"", file=f)

                print_noarch_targets(avx_exists=True)

                print(f"endif()", file=f)
            else:
                print_noarch_targets(avx_exists=False)

            print(f"", file=f)

            print(f"if (HYTEG_BUILD_WITH_PETSC)", file=f)
            print(f"   target_link_libraries({lib_name} PUBLIC PETSc::PETSc)", file=f)
            print(f"endif ()", file=f)

            print(
                f"if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)\n"
                f"    target_compile_features({lib_name} PUBLIC cxx_std_23)\n"
                f"else ()\n"
                f"    target_compile_features({lib_name} PUBLIC cxx_std_17)\n"
                f"endif ()",
                file=f,
            )


def generate_operator(
    args: argparse.Namespace, form_str: str, spec: Dict[str, Any]
) -> Dict[str, List[str]]:
    symbolizer = hog.symbolizer.Symbolizer()
    fe_spaces = {
        "P1": function_space.LagrangianFunctionSpace(1, symbolizer),
        "P2": function_space.LagrangianFunctionSpace(2, symbolizer),
        "P2Vector": function_space.TensorialVectorFunctionSpace(function_space.LagrangianFunctionSpace(2, symbolizer)),
        "N1E1": function_space.N1E1Space(symbolizer),
    }
    geometries = {
        2: element_geometry.TriangleElement(),
        3: element_geometry.TetrahedronElement(),
    }
    loop_strategies = {
        "cubes": operator_generation.loop_strategies.CUBES(),
        "sawtooth": operator_generation.loop_strategies.SAWTOOTH(),
    }
    precisions = {
        "fp16": types.hyteg_type(types.HOGPrecision.FP16),
        "fp32": types.hyteg_type(types.HOGPrecision.FP32),
        "fp64": types.hyteg_type(types.HOGPrecision.FP64),
        "real_t": types.hyteg_type(types.HOGPrecision.REAL_T),
    }
    blending_maps = {
        "IdentityMap": hog.blending.IdentityMap(),
        "AnnulusMap": hog.blending.AnnulusMap(),
        "IcosahedralShellMap": hog.blending.IcosahedralShellMap(),
    }

    def raise_exception(dict_key: Union[str, int]) -> None:
        dict_arg = spec[f"{dict_key}"]
        valid_options = []
        if dict_key == "precision":
            valid_options = [key for key in precisions.keys()]
        elif dict_key == "blending":
            valid_options = [key for key in blending_maps.keys()]

        raise ValueError(
            f"Something went wrong, "
            f"the given value '{dict_arg}' is not a valid '{dict_key}'.\n"
            f"{'' if not valid_options else str('Please choose one of these ' + str(valid_options) + '.')}"
        )

    try:
        get_form = getattr(forms, form_str)
    except:
        get_form = getattr(forms_vectorial, form_str)

    if "form-args" in spec:
        get_form = partial(get_form, **spec["form-args"])
    if "form-space-args" in spec:
        space_args = {
            key: fe_spaces[val] for (key, val) in spec["form-space-args"].items()
        }
        get_form = partial(get_form, **space_args)

    trial_space = fe_spaces[spec["trial-space"]]
    test_space = fe_spaces[spec["test-space"]]

    name = elementwise_operator_name(form_str, spec)
    optimizations = {
        operator_generation.optimizer.opts_arg_mapping[opt.upper()]
        for opt in spec["optimizations"]
    }

    type_descriptor = precisions["real_t"]  # set default precision
    if "precision" in spec:
        if spec["precision"] in precisions:
            type_descriptor = precisions[spec["precision"]]
        else:
            raise_exception("precision")

    blending = blending_maps["IdentityMap"]  # set default blending
    if "blending" in spec:
        if spec["blending"] in blending_maps:
            blending = blending_maps[spec["blending"]]
        else:
            raise_exception("blending")

    dims = spec["dimensions"]
    components_equal = True
    if "form-args" in spec:
        if (
            "component_test" in spec["form-args"]
            and "component_trial" in spec["form-args"]
        ):
            if (
                spec["form-args"]["component_test"] == 2
                or spec["form-args"]["component_trial"] == 2
            ):
                dims = [d for d in spec["dimensions"] if d >= 3]
            components_equal = (
                spec["form-args"]["component_test"]
                == spec["form-args"]["component_trial"]
            )

    if "form-args" in spec:
        if "component_index" in spec["form-args"]:
            if spec["form-args"]["component_index"] == 2:
                dims = [d for d in spec["dimensions"] if d >= 3]
            components_equal = False

    kernel_types = [
        operator_generation.kernel_types.ApplyWrapper(
            trial_space,
            test_space,
            type_descriptor=type_descriptor,
            dims=dims,
        ),
        operator_generation.kernel_types.AssembleWrapper(
            trial_space,
            test_space,
            type_descriptor=type_descriptor,
            dims=dims,
        ),
    ]

    if trial_space == test_space and components_equal:
        kernel_types.append(
            operator_generation.kernel_types.AssembleDiagonalWrapper(
                trial_space,
                type_descriptor=type_descriptor,
                dims=dims,
            )
        )

    with logger.TimedLogger(f"Generating {name}"):
        operator = operator_generation.operators.HyTeGElementwiseOperator(
            name,
            symbolizer,
            opts=optimizations,
            kernel_wrapper_types=kernel_types,
            type_descriptor=type_descriptor,
        )

        for geometry in [geometries[dim] for dim in dims]:
            quad = quadrature.Quadrature(
                quadrature.select_quadrule(spec["quadrature"], geometry), geometry
            )

            form = get_form(
                trial_space,
                test_space,
                geometry,
                symbolizer,
                blending=blending,  # type: ignore[call-arg] # kw-args are not supported by Callable
            )

            operator.add_integral(
                name="".join(name.split()),
                dim=geometry.dimensions,
                geometry=geometry,
                integration_domain=operator_generation.operators.MacroIntegrationDomain.VOLUME,
                quad=quad,
                blending=blending,
                form=form,
                loop_strategy=loop_strategies[spec["loop-strategy"]],
            )

        dir_path = os.path.join(args.output, form_str)
        operator.generate_class_code(
            dir_path,
            clang_format_binary=args.clang_format_binary,
        )

        kernel_implementations = {}
        for kernels in operator.operator_methods:
            for kernel in kernels.platform_dependent_funcs:
                for platform, function in kernel.items():
                    if not platform in kernel_implementations:
                        kernel_implementations[platform] = []

                    kernel_implementations[platform].append(
                        f"{operator.name}_{function.function_name}.cpp"
                    )

        return kernel_implementations


def elementwise_operator_name(form_str: str, spec: Dict[str, Any]) -> str:
    operator_name = form_str.title().replace("_", "")

    if spec["trial-space"] == spec["test-space"]:
        space_mapping = spec["trial-space"]
    else:
        space_mapping = f"{spec['trial-space']}To{spec['test-space']}"

    component = ""
    if "form-args" in spec:
        if (
            "component_test" in spec["form-args"]
            and "component_trial" in spec["form-args"]
        ):
            component = f"_{spec['form-args']['component_test']}_{spec['form-args']['component_trial']}"

    # I do not like this, but should do the trick until we have actual vector function spaces in the HOG.
    if "form-args" in spec:
        if "component_index" in spec["form-args"]:
            if "divergence" == form_str.lower():
                component = f"_0_{spec['form-args']['component_index']}"
            elif "gradient" == form_str.lower():
                component = f"_{spec['form-args']['component_index']}_0"

    blending = ""
    if spec.get("blending", "IdentityMap") != "IdentityMap":
        blending = spec["blending"]

    return f"{space_mapping}Elementwise{operator_name}{blending}{component}"


if __name__ == "__main__":
    main()
