add_library( opgen-mass

   P1ElementwiseMass.cpp
   P1ElementwiseMass.hpp
   P1ElementwiseMassParametricP1Map.cpp
   P1ElementwiseMassParametricP1Map.hpp
   P2ElementwiseMass.cpp
   P2ElementwiseMass.hpp
   P2ElementwiseMassAnnulusMap.cpp
   P2ElementwiseMassAnnulusMap.hpp
   P2ElementwiseMassIcosahedralShellMap.cpp
   P2ElementwiseMassIcosahedralShellMap.hpp
   P2ElementwiseMassParametricP2Map.cpp
   P2ElementwiseMassParametricP2Map.hpp
   P2PlusBubbleElementwiseMass.cpp
   P2PlusBubbleElementwiseMass.hpp
   P2PlusBubbleElementwiseMassAnnulusMap.cpp
   P2PlusBubbleElementwiseMassAnnulusMap.hpp
)
target_link_libraries( opgen-mass PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-mass PRIVATE

      avx/P1ElementwiseMassParametricP1Map_apply_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      avx/P1ElementwiseMassParametricP1Map_apply_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      avx/P1ElementwiseMassParametricP1Map_computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      avx/P1ElementwiseMassParametricP1Map_computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      avx/P1ElementwiseMass_apply_P1ElementwiseMass_macro_2D.cpp
      avx/P1ElementwiseMass_apply_P1ElementwiseMass_macro_3D.cpp
      avx/P1ElementwiseMass_computeInverseDiagonalOperatorValues_P1ElementwiseMass_macro_2D.cpp
      avx/P1ElementwiseMass_computeInverseDiagonalOperatorValues_P1ElementwiseMass_macro_3D.cpp
      avx/P2ElementwiseMassAnnulusMap_apply_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseMassAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseMassIcosahedralShellMap_apply_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseMassParametricP2Map_apply_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      avx/P2ElementwiseMassParametricP2Map_apply_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      avx/P2ElementwiseMassParametricP2Map_computeInverseDiagonalOperatorValues_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      avx/P2ElementwiseMassParametricP2Map_computeInverseDiagonalOperatorValues_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      avx/P2ElementwiseMass_apply_P2ElementwiseMass_macro_2D.cpp
      avx/P2ElementwiseMass_apply_P2ElementwiseMass_macro_3D.cpp
      avx/P2ElementwiseMass_computeInverseDiagonalOperatorValues_P2ElementwiseMass_macro_2D.cpp
      avx/P2ElementwiseMass_computeInverseDiagonalOperatorValues_P2ElementwiseMass_macro_3D.cpp
      avx/P2PlusBubbleElementwiseMassAnnulusMap_apply_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2PlusBubbleElementwiseMassAnnulusMap_computeInverseDiagonalOperatorValues_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2PlusBubbleElementwiseMass_apply_P2PlusBubbleElementwiseMass_macro_2D.cpp
      avx/P2PlusBubbleElementwiseMass_computeInverseDiagonalOperatorValues_P2PlusBubbleElementwiseMass_macro_2D.cpp
      noarch/P1ElementwiseMassParametricP1Map_toMatrix_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      noarch/P1ElementwiseMassParametricP1Map_toMatrix_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      noarch/P1ElementwiseMass_toMatrix_P1ElementwiseMass_macro_2D.cpp
      noarch/P1ElementwiseMass_toMatrix_P1ElementwiseMass_macro_3D.cpp
      noarch/P2ElementwiseMassAnnulusMap_toMatrix_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseMassIcosahedralShellMap_toMatrix_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseMassParametricP2Map_toMatrix_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      noarch/P2ElementwiseMassParametricP2Map_toMatrix_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      noarch/P2ElementwiseMass_toMatrix_P2ElementwiseMass_macro_2D.cpp
      noarch/P2ElementwiseMass_toMatrix_P2ElementwiseMass_macro_3D.cpp
      noarch/P2PlusBubbleElementwiseMassAnnulusMap_toMatrix_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2PlusBubbleElementwiseMass_toMatrix_P2PlusBubbleElementwiseMass_macro_2D.cpp
   )

   set_source_files_properties(

      avx/P1ElementwiseMassParametricP1Map_apply_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      avx/P1ElementwiseMassParametricP1Map_apply_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      avx/P1ElementwiseMassParametricP1Map_computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      avx/P1ElementwiseMassParametricP1Map_computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      avx/P1ElementwiseMass_apply_P1ElementwiseMass_macro_2D.cpp
      avx/P1ElementwiseMass_apply_P1ElementwiseMass_macro_3D.cpp
      avx/P1ElementwiseMass_computeInverseDiagonalOperatorValues_P1ElementwiseMass_macro_2D.cpp
      avx/P1ElementwiseMass_computeInverseDiagonalOperatorValues_P1ElementwiseMass_macro_3D.cpp
      avx/P2ElementwiseMassAnnulusMap_apply_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseMassAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseMassIcosahedralShellMap_apply_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseMassParametricP2Map_apply_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      avx/P2ElementwiseMassParametricP2Map_apply_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      avx/P2ElementwiseMassParametricP2Map_computeInverseDiagonalOperatorValues_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      avx/P2ElementwiseMassParametricP2Map_computeInverseDiagonalOperatorValues_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      avx/P2ElementwiseMass_apply_P2ElementwiseMass_macro_2D.cpp
      avx/P2ElementwiseMass_apply_P2ElementwiseMass_macro_3D.cpp
      avx/P2ElementwiseMass_computeInverseDiagonalOperatorValues_P2ElementwiseMass_macro_2D.cpp
      avx/P2ElementwiseMass_computeInverseDiagonalOperatorValues_P2ElementwiseMass_macro_3D.cpp
      avx/P2PlusBubbleElementwiseMassAnnulusMap_apply_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2PlusBubbleElementwiseMassAnnulusMap_computeInverseDiagonalOperatorValues_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      avx/P2PlusBubbleElementwiseMass_apply_P2PlusBubbleElementwiseMass_macro_2D.cpp
      avx/P2PlusBubbleElementwiseMass_computeInverseDiagonalOperatorValues_P2PlusBubbleElementwiseMass_macro_2D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-mass PRIVATE

      noarch/P1ElementwiseMassParametricP1Map_apply_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      noarch/P1ElementwiseMassParametricP1Map_apply_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      noarch/P1ElementwiseMassParametricP1Map_computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      noarch/P1ElementwiseMassParametricP1Map_computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      noarch/P1ElementwiseMassParametricP1Map_toMatrix_P1ElementwiseMassParametricP1Map_macro_2D.cpp
      noarch/P1ElementwiseMassParametricP1Map_toMatrix_P1ElementwiseMassParametricP1Map_macro_3D.cpp
      noarch/P1ElementwiseMass_apply_P1ElementwiseMass_macro_2D.cpp
      noarch/P1ElementwiseMass_apply_P1ElementwiseMass_macro_3D.cpp
      noarch/P1ElementwiseMass_computeInverseDiagonalOperatorValues_P1ElementwiseMass_macro_2D.cpp
      noarch/P1ElementwiseMass_computeInverseDiagonalOperatorValues_P1ElementwiseMass_macro_3D.cpp
      noarch/P1ElementwiseMass_toMatrix_P1ElementwiseMass_macro_2D.cpp
      noarch/P1ElementwiseMass_toMatrix_P1ElementwiseMass_macro_3D.cpp
      noarch/P2ElementwiseMassAnnulusMap_apply_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseMassAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseMassAnnulusMap_toMatrix_P2ElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseMassIcosahedralShellMap_apply_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseMassIcosahedralShellMap_toMatrix_P2ElementwiseMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseMassParametricP2Map_apply_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      noarch/P2ElementwiseMassParametricP2Map_apply_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      noarch/P2ElementwiseMassParametricP2Map_computeInverseDiagonalOperatorValues_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      noarch/P2ElementwiseMassParametricP2Map_computeInverseDiagonalOperatorValues_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      noarch/P2ElementwiseMassParametricP2Map_toMatrix_P2ElementwiseMassParametricP2Map_macro_2D.cpp
      noarch/P2ElementwiseMassParametricP2Map_toMatrix_P2ElementwiseMassParametricP2Map_macro_3D.cpp
      noarch/P2ElementwiseMass_apply_P2ElementwiseMass_macro_2D.cpp
      noarch/P2ElementwiseMass_apply_P2ElementwiseMass_macro_3D.cpp
      noarch/P2ElementwiseMass_computeInverseDiagonalOperatorValues_P2ElementwiseMass_macro_2D.cpp
      noarch/P2ElementwiseMass_computeInverseDiagonalOperatorValues_P2ElementwiseMass_macro_3D.cpp
      noarch/P2ElementwiseMass_toMatrix_P2ElementwiseMass_macro_2D.cpp
      noarch/P2ElementwiseMass_toMatrix_P2ElementwiseMass_macro_3D.cpp
      noarch/P2PlusBubbleElementwiseMassAnnulusMap_apply_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2PlusBubbleElementwiseMassAnnulusMap_computeInverseDiagonalOperatorValues_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2PlusBubbleElementwiseMassAnnulusMap_toMatrix_P2PlusBubbleElementwiseMassAnnulusMap_macro_2D.cpp
      noarch/P2PlusBubbleElementwiseMass_apply_P2PlusBubbleElementwiseMass_macro_2D.cpp
      noarch/P2PlusBubbleElementwiseMass_computeInverseDiagonalOperatorValues_P2PlusBubbleElementwiseMass_macro_2D.cpp
      noarch/P2PlusBubbleElementwiseMass_toMatrix_P2PlusBubbleElementwiseMass_macro_2D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-mass PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-mass PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-mass PUBLIC cxx_std_17)
endif ()
