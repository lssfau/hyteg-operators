add_library( opgen-k_divdiv

   P2VectorElementwiseKDivdiv.cpp
   P2VectorElementwiseKDivdiv.hpp
   P2VectorElementwiseKDivdivAnnulusMap.cpp
   P2VectorElementwiseKDivdivAnnulusMap.hpp
   P2VectorElementwiseKDivdivIcosahedralShellMap.cpp
   P2VectorElementwiseKDivdivIcosahedralShellMap.hpp
)
target_link_libraries( opgen-k_divdiv PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-k_divdiv PRIVATE

      avx/P2VectorElementwiseKDivdivAnnulusMap_apply_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      avx/P2VectorElementwiseKDivdivAnnulusMap_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      avx/P2VectorElementwiseKDivdivIcosahedralShellMap_apply_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorElementwiseKDivdivIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorElementwiseKDivdiv_apply_P2VectorElementwiseKDivdiv_macro_2D.cpp
      avx/P2VectorElementwiseKDivdiv_apply_P2VectorElementwiseKDivdiv_macro_3D.cpp
      avx/P2VectorElementwiseKDivdiv_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdiv_macro_2D.cpp
      avx/P2VectorElementwiseKDivdiv_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdiv_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdivAnnulusMap_toMatrix_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdivIcosahedralShellMap_toMatrix_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdiv_toMatrix_P2VectorElementwiseKDivdiv_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdiv_toMatrix_P2VectorElementwiseKDivdiv_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2VectorElementwiseKDivdivAnnulusMap_apply_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      avx/P2VectorElementwiseKDivdivAnnulusMap_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      avx/P2VectorElementwiseKDivdivIcosahedralShellMap_apply_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorElementwiseKDivdivIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorElementwiseKDivdiv_apply_P2VectorElementwiseKDivdiv_macro_2D.cpp
      avx/P2VectorElementwiseKDivdiv_apply_P2VectorElementwiseKDivdiv_macro_3D.cpp
      avx/P2VectorElementwiseKDivdiv_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdiv_macro_2D.cpp
      avx/P2VectorElementwiseKDivdiv_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdiv_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-k_divdiv PRIVATE

      noarch/P2VectorElementwiseKDivdivAnnulusMap_apply_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdivAnnulusMap_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdivAnnulusMap_toMatrix_P2VectorElementwiseKDivdivAnnulusMap_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdivIcosahedralShellMap_apply_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdivIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdivIcosahedralShellMap_toMatrix_P2VectorElementwiseKDivdivIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdiv_apply_P2VectorElementwiseKDivdiv_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdiv_apply_P2VectorElementwiseKDivdiv_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdiv_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdiv_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdiv_computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdiv_macro_3D.cpp
      noarch/P2VectorElementwiseKDivdiv_toMatrix_P2VectorElementwiseKDivdiv_macro_2D.cpp
      noarch/P2VectorElementwiseKDivdiv_toMatrix_P2VectorElementwiseKDivdiv_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-k_divdiv PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-k_divdiv PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-k_divdiv PUBLIC cxx_std_17)
endif ()
