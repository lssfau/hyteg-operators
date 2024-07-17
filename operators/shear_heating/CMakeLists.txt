add_library( opgen-shear_heating

   P2ElementwiseShearHeating.cpp
   P2ElementwiseShearHeating.hpp
   P2ElementwiseShearHeatingAnnulusMap.cpp
   P2ElementwiseShearHeatingAnnulusMap.hpp
   P2ElementwiseShearHeatingIcosahedralShellMap.cpp
   P2ElementwiseShearHeatingIcosahedralShellMap.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-shear_heating PRIVATE

      avx/P2ElementwiseShearHeatingAnnulusMap_apply_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseShearHeatingAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseShearHeatingIcosahedralShellMap_apply_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseShearHeatingIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseShearHeating_apply_P2ElementwiseShearHeating_macro_2D.cpp
      avx/P2ElementwiseShearHeating_apply_P2ElementwiseShearHeating_macro_3D.cpp
      avx/P2ElementwiseShearHeating_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeating_macro_2D.cpp
      avx/P2ElementwiseShearHeating_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeating_macro_3D.cpp
      noarch/P2ElementwiseShearHeatingAnnulusMap_toMatrix_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseShearHeatingIcosahedralShellMap_toMatrix_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseShearHeating_toMatrix_P2ElementwiseShearHeating_macro_2D.cpp
      noarch/P2ElementwiseShearHeating_toMatrix_P2ElementwiseShearHeating_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2ElementwiseShearHeatingAnnulusMap_apply_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseShearHeatingAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseShearHeatingIcosahedralShellMap_apply_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseShearHeatingIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseShearHeating_apply_P2ElementwiseShearHeating_macro_2D.cpp
      avx/P2ElementwiseShearHeating_apply_P2ElementwiseShearHeating_macro_3D.cpp
      avx/P2ElementwiseShearHeating_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeating_macro_2D.cpp
      avx/P2ElementwiseShearHeating_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeating_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-shear_heating PRIVATE

      noarch/P2ElementwiseShearHeatingAnnulusMap_apply_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseShearHeatingAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseShearHeatingAnnulusMap_toMatrix_P2ElementwiseShearHeatingAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseShearHeatingIcosahedralShellMap_apply_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseShearHeatingIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseShearHeatingIcosahedralShellMap_toMatrix_P2ElementwiseShearHeatingIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseShearHeating_apply_P2ElementwiseShearHeating_macro_2D.cpp
      noarch/P2ElementwiseShearHeating_apply_P2ElementwiseShearHeating_macro_3D.cpp
      noarch/P2ElementwiseShearHeating_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeating_macro_2D.cpp
      noarch/P2ElementwiseShearHeating_computeInverseDiagonalOperatorValues_P2ElementwiseShearHeating_macro_3D.cpp
      noarch/P2ElementwiseShearHeating_toMatrix_P2ElementwiseShearHeating_macro_2D.cpp
      noarch/P2ElementwiseShearHeating_toMatrix_P2ElementwiseShearHeating_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-shear_heating PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-shear_heating PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-shear_heating PUBLIC cxx_std_17)
endif ()
