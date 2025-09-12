add_library( opgen-adiabatic_heating

   P2ElementwiseAdiabaticHeatingAnnulusMap.cpp
   P2ElementwiseAdiabaticHeatingAnnulusMap.hpp
   P2ElementwiseAdiabaticHeatingIcosahedralShellMap.cpp
   P2ElementwiseAdiabaticHeatingIcosahedralShellMap.hpp
)
target_link_libraries( opgen-adiabatic_heating PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-adiabatic_heating PRIVATE

      avx/P2ElementwiseAdiabaticHeatingAnnulusMap_applyScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdiabaticHeatingAnnulusMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_applyScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdiabaticHeatingAnnulusMap_toMatrixScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_toMatrixScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2ElementwiseAdiabaticHeatingAnnulusMap_applyScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdiabaticHeatingAnnulusMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_applyScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-adiabatic_heating PRIVATE

      noarch/P2ElementwiseAdiabaticHeatingAnnulusMap_applyScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdiabaticHeatingAnnulusMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdiabaticHeatingAnnulusMap_toMatrixScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_applyScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdiabaticHeatingIcosahedralShellMap_toMatrixScaled_P2ElementwiseAdiabaticHeatingIcosahedralShellMap_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-adiabatic_heating PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-adiabatic_heating PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-adiabatic_heating PUBLIC cxx_std_17)
endif ()
