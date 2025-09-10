add_library( opgen-advection

   P2ElementwiseAdvection.cpp
   P2ElementwiseAdvection.hpp
   P2ElementwiseAdvectionAnnulusMap.cpp
   P2ElementwiseAdvectionAnnulusMap.hpp
   P2ElementwiseAdvectionIcosahedralShellMap.cpp
   P2ElementwiseAdvectionIcosahedralShellMap.hpp
)
target_link_libraries( opgen-advection PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-advection PRIVATE

      avx/P2ElementwiseAdvectionAnnulusMap_applyScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdvectionAnnulusMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdvectionIcosahedralShellMap_applyScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseAdvectionIcosahedralShellMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseAdvection_applyScaled_P2ElementwiseAdvection_macro_2D.cpp
      avx/P2ElementwiseAdvection_applyScaled_P2ElementwiseAdvection_macro_3D.cpp
      avx/P2ElementwiseAdvection_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvection_macro_2D.cpp
      avx/P2ElementwiseAdvection_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvection_macro_3D.cpp
      noarch/P2ElementwiseAdvectionAnnulusMap_toMatrixScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdvectionIcosahedralShellMap_toMatrixScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdvection_toMatrixScaled_P2ElementwiseAdvection_macro_2D.cpp
      noarch/P2ElementwiseAdvection_toMatrixScaled_P2ElementwiseAdvection_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2ElementwiseAdvectionAnnulusMap_applyScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdvectionAnnulusMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseAdvectionIcosahedralShellMap_applyScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseAdvectionIcosahedralShellMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseAdvection_applyScaled_P2ElementwiseAdvection_macro_2D.cpp
      avx/P2ElementwiseAdvection_applyScaled_P2ElementwiseAdvection_macro_3D.cpp
      avx/P2ElementwiseAdvection_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvection_macro_2D.cpp
      avx/P2ElementwiseAdvection_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvection_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-advection PRIVATE

      noarch/P2ElementwiseAdvectionAnnulusMap_applyScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdvectionAnnulusMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdvectionAnnulusMap_toMatrixScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseAdvectionIcosahedralShellMap_applyScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdvectionIcosahedralShellMap_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdvectionIcosahedralShellMap_toMatrixScaled_P2ElementwiseAdvectionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseAdvection_applyScaled_P2ElementwiseAdvection_macro_2D.cpp
      noarch/P2ElementwiseAdvection_applyScaled_P2ElementwiseAdvection_macro_3D.cpp
      noarch/P2ElementwiseAdvection_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvection_macro_2D.cpp
      noarch/P2ElementwiseAdvection_computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdvection_macro_3D.cpp
      noarch/P2ElementwiseAdvection_toMatrixScaled_P2ElementwiseAdvection_macro_2D.cpp
      noarch/P2ElementwiseAdvection_toMatrixScaled_P2ElementwiseAdvection_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-advection PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-advection PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-advection PUBLIC cxx_std_17)
endif ()
