add_library( opgen-epsilon

   P2ElementwiseEpsilonIcosahedralShellMap_0_0.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_0_0.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_0_1.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_0_1.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_0_2.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_0_2.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_1_0.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_1_0.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_1_1.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_1_1.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_1_2.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_1_2.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_2_0.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_2_0.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_2_1.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_2_1.hpp
   P2ElementwiseEpsilonIcosahedralShellMap_2_2.cpp
   P2ElementwiseEpsilonIcosahedralShellMap_2_2.hpp
   P2ElementwiseEpsilon_0_0.cpp
   P2ElementwiseEpsilon_0_0.hpp
   P2ElementwiseEpsilon_0_1.cpp
   P2ElementwiseEpsilon_0_1.hpp
   P2ElementwiseEpsilon_0_2.cpp
   P2ElementwiseEpsilon_0_2.hpp
   P2ElementwiseEpsilon_1_0.cpp
   P2ElementwiseEpsilon_1_0.hpp
   P2ElementwiseEpsilon_1_1.cpp
   P2ElementwiseEpsilon_1_1.hpp
   P2ElementwiseEpsilon_1_2.cpp
   P2ElementwiseEpsilon_1_2.hpp
   P2ElementwiseEpsilon_2_0.cpp
   P2ElementwiseEpsilon_2_0.hpp
   P2ElementwiseEpsilon_2_1.cpp
   P2ElementwiseEpsilon_2_1.hpp
   P2ElementwiseEpsilon_2_2.cpp
   P2ElementwiseEpsilon_2_2.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-epsilon PRIVATE

      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_0_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_0_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseEpsilon_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_1_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_0_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_1_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_1_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseEpsilon_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_2_toMatrix_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilonIcosahedralShellMap_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_0_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_0_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseEpsilon_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_1_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_0_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_1_apply_macro_2D.cpp
      avx/P2ElementwiseEpsilon_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_1_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseEpsilon_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseEpsilon_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseEpsilon_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-epsilon PRIVATE

      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_0_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_1_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_2_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_0_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_1_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_2_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_0_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_1_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_2_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilonIcosahedralShellMap_2_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_0_apply_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_0_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_0_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_1_apply_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_1_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_2_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_0_apply_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_0_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_1_apply_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_1_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_1_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseEpsilon_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_2_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_0_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_1_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_2_apply_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseEpsilon_2_2_toMatrix_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-epsilon PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-epsilon PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-epsilon PUBLIC cxx_std_17)
endif ()
