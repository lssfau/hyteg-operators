import argparse
from functools import partial
import os
import sys
from typing import Any, Dict, List, Union

if sys.version_info >= (3, 11):
    import tomllib
else:
    import tomli as tomllib

import hfg
from hfg import *
from hfg.operator_generation import *


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
                        operator_cleared["form-args.component_test"] = comp_test
                        operator_cleared["form-args.component_trial"] = comp_trial
                        operators_unfolded.append(operator_cleared)
            else:
                operators_unfolded = [o for o in operators]
        toml_dict_unfolded[form_str] = operators_unfolded
    return toml_dict_unfolded


def main() -> None:
    args = parse_args()

    with open(args.filename, "rb") as f:
        toml_dict = tomllib.load(f)
        # print(f"{toml_dict = }")
        toml_dict = unfold_toml_dict(toml_dict)

        generate_toplevel_cmake(args, toml_dict)
        for form_str, operators in toml_dict.items():
            kernel_implementations = {}
            for spec in operators:
                op_kernel_impls = generate_operator(args, form_str, spec)

                for platform, impls in op_kernel_impls.items():
                    if not platform in kernel_implementations:
                        kernel_implementations[platform] = []
                    kernel_implementations[platform].extend(impls)

            generate_cmake(args, form_str, operators, kernel_implementations)


def generate_toplevel_cmake(
    args: argparse.Namespace, toml_dict: Dict[str, Any]
) -> None:
    os.makedirs(args.output, exist_ok=True)
    output_path = os.path.join(args.output, "CMakeLists.txt")

    with open(output_path, "w") as f:
        print(f'add_compile_options( "-Wno-shadow" )', file=f)
        print(f"", file=f)
        print(f"if(NOT WALBERLA_DOUBLE_ACCURACY)", file=f)
        print(f'   add_compile_options( "-Wno-float-conversion" )', file=f)
        print(f"endif()", file=f)
        print(f"", file=f)

        for form_str in toml_dict:
            print(f"add_subdirectory({form_str})", file=f)


def generate_cmake(
    args: argparse.Namespace,
    form_str: str,
    operators: List[Dict[str, Any]],
    kernel_implementations: Dict[str, List[str]],
) -> None:
    dir_path = os.path.join(args.output, form_str)
    os.makedirs(dir_path, exist_ok=True)
    output_path = os.path.join(dir_path, "CMakeLists.txt")

    lib_name = f"opgen-{form_str}"

    with open(output_path, "w") as f:
        print(f"add_library( {lib_name}", file=f)
        print(f"", file=f)

        for spec in operators:
            name = elementwise_operator_name(form_str, spec)
            print(f"   {name}.cpp", file=f)
            print(f"   {name}.hpp", file=f)

        print(f")", file=f)
        print(f"", file=f)

        def print_noarch_targets(avx_exists: bool):
            indent_noarch_source_file = "   " if avx_exists else ""
            print(
                f"{indent_noarch_source_file}target_sources({lib_name} PRIVATE", file=f
            )
            print(f"", file=f)

            for source_file_inner in kernel_implementations["noarch"]:
                print(
                    f"{indent_noarch_source_file}   noarch/{source_file_inner}", file=f
                )

            print(f"{indent_noarch_source_file})", file=f)

        if "avx" in kernel_implementations:
            print(f"if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)", file=f)
            print(f"   target_sources({lib_name} PRIVATE", file=f)
            print(f"", file=f)

            for source_file in kernel_implementations["avx"]:
                print(f"      avx/{source_file}", file=f)

            for source_file in kernel_implementations["noarch"]:
                if not source_file in kernel_implementations["avx"]:
                    print(f"      noarch/{source_file}", file=f)

            print(f"   )", file=f)
            print(f"", file=f)

            print(f"   set_source_files_properties(", file=f)
            print(f"", file=f)

            for source_file in kernel_implementations["avx"]:
                print(f"      avx/{source_file}", file=f)
            print(f"", file=f)
            print(
                "      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}",
                file=f,
            )

            print(f"   )", file=f)
            print(f"else()", file=f)
            print(
                f"   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)", file=f
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
    symbolizer = hfg.symbolizer.Symbolizer()
    fe_spaces = {
        "P1": function_space.LagrangianFunctionSpace(1, symbolizer),
        "P2": function_space.LagrangianFunctionSpace(2, symbolizer),
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
        "fp16": types.hyteg_type(types.HFGPrecision.FP16),
        "fp32": types.hyteg_type(types.HFGPrecision.FP32),
        "fp64": types.hyteg_type(types.HFGPrecision.FP64),
    }
    blending_maps = {
        "IdentityMap": hfg.blending.IdentityMap(),
        "AnnulusMap": hfg.blending.AnnulusMap(),
        "IcosahedralShellMap": hfg.blending.IcosahedralShellMap(),
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

    type_descriptor = precisions["fp64"]  # set default precision
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
    if "form-args.component_test" in spec and "form-args.component_trial" in spec:
        if (
            spec["form-args.component_test"] == 2
            or spec["form-args.component_trial"] == 2
        ):
            dims = [d for d in spec["dimensions"] if d >= 3]

        components_equal = (
            spec["form-args.component_test"] == spec["form-args.component_trial"]
        )

    kernel_types = [
        operator_generation.kernel_types.Apply(
            test_space,
            trial_space,
            type_descriptor=type_descriptor,
            dims=dims,
        ),
        operator_generation.kernel_types.Assemble(
            test_space,
            trial_space,
            type_descriptor=type_descriptor,
            dims=dims,
        ),
    ]

    if trial_space == test_space and components_equal:
        kernel_types.append(
            operator_generation.kernel_types.AssembleDiagonal(
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
            kernel_types=kernel_types,
            type_descriptor=type_descriptor,
        )

        for geometry in [geometries[dim] for dim in dims]:
            quad = quadrature.Quadrature(
                quadrature.select_quadrule(spec["quadrature"], geometry), geometry
            )

            form = get_form(
                test_space,
                trial_space,
                geometry,
                symbolizer,
                blending=blending,  # type: ignore[call-arg] # kw-args are not supported by Callable
            )

            operator.set_element_matrix(
                dim=geometry.dimensions,
                geometry=geometry,
                integration_domain=operator_generation.operators.MacroIntegrationDomain.VOLUME,
                quad=quad,
                blending=blending,
                form=form,
            )

        dir_path = os.path.join(args.output, form_str)
        operator.generate_class_code(
            dir_path,
            args.clang_format_binary,
            loop_strategies[spec["loop-strategy"]],
            class_files=operators.CppClassFiles.HEADER_IMPL_AND_VARIANTS,
            clang_format=True,
        )

        kernel_implementations = {}
        for kernel in operator.kernels:
            for platform, function in kernel.platform_dependent_funcs.items():
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
        space_mapping = f"{spec['test-space']}To{spec['trial-space']}"

    component = ""
    if "form-args.component_test" in spec and "form-args.component_trial" in spec:
        component = (
            f"_{spec['form-args.component_test']}_{spec['form-args.component_trial']}"
        )

    return f"{space_mapping}Elementwise{operator_name}{component}"


if __name__ == "__main__":
    main()
