add_library( opgen-k_mass

   P1ElementwiseKMass.cpp
   P1ElementwiseKMass.hpp
   P1ElementwiseKMassAnnulusMap.cpp
   P1ElementwiseKMassAnnulusMap.hpp
   P1ElementwiseKMassIcosahedralShellMap.cpp
   P1ElementwiseKMassIcosahedralShellMap.hpp
   P2ElementwiseKMass.cpp
   P2ElementwiseKMass.hpp
   P2ElementwiseKMassAnnulusMap.cpp
   P2ElementwiseKMassAnnulusMap.hpp
   P2ElementwiseKMassIcosahedralShellMap.cpp
   P2ElementwiseKMassIcosahedralShellMap.hpp
   P2ToP1ElementwiseKMass.cpp
   P2ToP1ElementwiseKMass.hpp
   P2ToP1ElementwiseKMassAnnulusMap.cpp
   P2ToP1ElementwiseKMassAnnulusMap.hpp
   P2ToP1ElementwiseKMassIcosahedralShellMap.cpp
   P2ToP1ElementwiseKMassIcosahedralShellMap.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-k_mass PRIVATE

      avx/P1ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      avx/P1ElementwiseKMassAnnulusMap_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      avx/P1ElementwiseKMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P1ElementwiseKMass_apply_macro_2D.cpp
      avx/P1ElementwiseKMass_apply_macro_3D.cpp
      avx/P1ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      avx/P2ElementwiseKMassAnnulusMap_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      avx/P2ElementwiseKMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseKMass_apply_macro_2D.cpp
      avx/P2ElementwiseKMass_apply_macro_3D.cpp
      avx/P2ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ToP1ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      avx/P2ToP1ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      avx/P2ToP1ElementwiseKMass_apply_macro_2D.cpp
      avx/P2ToP1ElementwiseKMass_apply_macro_3D.cpp
      noarch/P1ElementwiseKMassAnnulusMap_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseKMassIcosahedralShellMap_toMatrix_macro_3D.cpp
      noarch/P1ElementwiseKMass_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseKMass_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseKMassAnnulusMap_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseKMassIcosahedralShellMap_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseKMass_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseKMass_toMatrix_macro_3D.cpp
      noarch/P2ToP1ElementwiseKMassAnnulusMap_toMatrix_macro_2D.cpp
      noarch/P2ToP1ElementwiseKMassIcosahedralShellMap_toMatrix_macro_3D.cpp
      noarch/P2ToP1ElementwiseKMass_toMatrix_macro_2D.cpp
      noarch/P2ToP1ElementwiseKMass_toMatrix_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P1ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      avx/P1ElementwiseKMassAnnulusMap_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      avx/P1ElementwiseKMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P1ElementwiseKMass_apply_macro_2D.cpp
      avx/P1ElementwiseKMass_apply_macro_3D.cpp
      avx/P1ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      avx/P2ElementwiseKMassAnnulusMap_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      avx/P2ElementwiseKMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseKMass_apply_macro_2D.cpp
      avx/P2ElementwiseKMass_apply_macro_3D.cpp
      avx/P2ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ToP1ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      avx/P2ToP1ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      avx/P2ToP1ElementwiseKMass_apply_macro_2D.cpp
      avx/P2ToP1ElementwiseKMass_apply_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-k_mass PRIVATE

      noarch/P1ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      noarch/P1ElementwiseKMassAnnulusMap_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P1ElementwiseKMassAnnulusMap_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      noarch/P1ElementwiseKMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P1ElementwiseKMassIcosahedralShellMap_toMatrix_macro_3D.cpp
      noarch/P1ElementwiseKMass_apply_macro_2D.cpp
      noarch/P1ElementwiseKMass_apply_macro_3D.cpp
      noarch/P1ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P1ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P1ElementwiseKMass_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseKMass_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      noarch/P2ElementwiseKMassAnnulusMap_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseKMassAnnulusMap_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      noarch/P2ElementwiseKMassIcosahedralShellMap_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseKMassIcosahedralShellMap_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseKMass_apply_macro_2D.cpp
      noarch/P2ElementwiseKMass_apply_macro_3D.cpp
      noarch/P2ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseKMass_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseKMass_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseKMass_toMatrix_macro_3D.cpp
      noarch/P2ToP1ElementwiseKMassAnnulusMap_apply_macro_2D.cpp
      noarch/P2ToP1ElementwiseKMassAnnulusMap_toMatrix_macro_2D.cpp
      noarch/P2ToP1ElementwiseKMassIcosahedralShellMap_apply_macro_3D.cpp
      noarch/P2ToP1ElementwiseKMassIcosahedralShellMap_toMatrix_macro_3D.cpp
      noarch/P2ToP1ElementwiseKMass_apply_macro_2D.cpp
      noarch/P2ToP1ElementwiseKMass_apply_macro_3D.cpp
      noarch/P2ToP1ElementwiseKMass_toMatrix_macro_2D.cpp
      noarch/P2ToP1ElementwiseKMass_toMatrix_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-k_mass PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-k_mass PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-k_mass PUBLIC cxx_std_17)
endif ()
