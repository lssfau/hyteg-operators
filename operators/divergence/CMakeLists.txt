add_library( opgen-divergence

   P2ToP1ElementwiseDivergenceAnnulusMap_0_0.cpp
   P2ToP1ElementwiseDivergenceAnnulusMap_0_0.hpp
   P2ToP1ElementwiseDivergenceAnnulusMap_0_1.cpp
   P2ToP1ElementwiseDivergenceAnnulusMap_0_1.hpp
   P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0.cpp
   P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0.hpp
   P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1.cpp
   P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1.hpp
   P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2.cpp
   P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2.hpp
   P2ToP1ElementwiseDivergence_0_0.cpp
   P2ToP1ElementwiseDivergence_0_0.hpp
   P2ToP1ElementwiseDivergence_0_1.cpp
   P2ToP1ElementwiseDivergence_0_1.hpp
   P2ToP1ElementwiseDivergence_0_2.cpp
   P2ToP1ElementwiseDivergence_0_2.hpp
   P2VectorToP1ElementwiseDivergence.cpp
   P2VectorToP1ElementwiseDivergence.hpp
   P2VectorToP1ElementwiseDivergenceAnnulusMap.cpp
   P2VectorToP1ElementwiseDivergenceAnnulusMap.hpp
   P2VectorToP1ElementwiseDivergenceCompressible.cpp
   P2VectorToP1ElementwiseDivergenceCompressible.hpp
   P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap.cpp
   P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap.hpp
   P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap.cpp
   P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap.hpp
   P2VectorToP1ElementwiseDivergenceIcosahedralShellMap.cpp
   P2VectorToP1ElementwiseDivergenceIcosahedralShellMap.hpp
   P2VectorToP1ElementwiseDivergenceParametricP2Map.cpp
   P2VectorToP1ElementwiseDivergenceParametricP2Map.hpp
)
target_link_libraries( opgen-divergence PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-divergence PRIVATE

      avx/P2ToP1ElementwiseDivergenceAnnulusMap_0_0_apply_P2ToP1ElementwiseDivergenceAnnulusMap_0_0_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergenceAnnulusMap_0_1_apply_P2ToP1ElementwiseDivergenceAnnulusMap_0_1_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergence_0_0_apply_P2ToP1ElementwiseDivergence_0_0_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergence_0_0_apply_P2ToP1ElementwiseDivergence_0_0_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergence_0_1_apply_P2ToP1ElementwiseDivergence_0_1_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergence_0_1_apply_P2ToP1ElementwiseDivergence_0_1_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergence_0_2_apply_P2ToP1ElementwiseDivergence_0_2_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergence_0_2_apply_P2ToP1ElementwiseDivergence_0_2_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceAnnulusMap_apply_P2VectorToP1ElementwiseDivergenceAnnulusMap_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_apply_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_apply_P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressible_apply_P2VectorToP1ElementwiseDivergenceCompressible_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressible_apply_P2VectorToP1ElementwiseDivergenceCompressible_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_apply_P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceParametricP2Map_apply_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceParametricP2Map_apply_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergence_apply_P2VectorToP1ElementwiseDivergence_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergence_apply_P2VectorToP1ElementwiseDivergence_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceAnnulusMap_0_0_toMatrix_P2ToP1ElementwiseDivergenceAnnulusMap_0_0_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergenceAnnulusMap_0_1_toMatrix_P2ToP1ElementwiseDivergenceAnnulusMap_0_1_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_0_toMatrix_P2ToP1ElementwiseDivergence_0_0_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_0_toMatrix_P2ToP1ElementwiseDivergence_0_0_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_1_toMatrix_P2ToP1ElementwiseDivergence_0_1_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_1_toMatrix_P2ToP1ElementwiseDivergence_0_1_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_2_toMatrix_P2ToP1ElementwiseDivergence_0_2_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_2_toMatrix_P2ToP1ElementwiseDivergence_0_2_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceAnnulusMap_toMatrix_P2VectorToP1ElementwiseDivergenceAnnulusMap_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_toMatrix_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_toMatrix_P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressible_toMatrix_P2VectorToP1ElementwiseDivergenceCompressible_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressible_toMatrix_P2VectorToP1ElementwiseDivergenceCompressible_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_toMatrix_P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceParametricP2Map_toMatrix_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceParametricP2Map_toMatrix_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergence_toMatrix_P2VectorToP1ElementwiseDivergence_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergence_toMatrix_P2VectorToP1ElementwiseDivergence_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2ToP1ElementwiseDivergenceAnnulusMap_0_0_apply_P2ToP1ElementwiseDivergenceAnnulusMap_0_0_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergenceAnnulusMap_0_1_apply_P2ToP1ElementwiseDivergenceAnnulusMap_0_1_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergence_0_0_apply_P2ToP1ElementwiseDivergence_0_0_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergence_0_0_apply_P2ToP1ElementwiseDivergence_0_0_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergence_0_1_apply_P2ToP1ElementwiseDivergence_0_1_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergence_0_1_apply_P2ToP1ElementwiseDivergence_0_1_macro_3D.cpp
      avx/P2ToP1ElementwiseDivergence_0_2_apply_P2ToP1ElementwiseDivergence_0_2_macro_2D.cpp
      avx/P2ToP1ElementwiseDivergence_0_2_apply_P2ToP1ElementwiseDivergence_0_2_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceAnnulusMap_apply_P2VectorToP1ElementwiseDivergenceAnnulusMap_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_apply_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_apply_P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressible_apply_P2VectorToP1ElementwiseDivergenceCompressible_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceCompressible_apply_P2VectorToP1ElementwiseDivergenceCompressible_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_apply_P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergenceParametricP2Map_apply_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergenceParametricP2Map_apply_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_3D.cpp
      avx/P2VectorToP1ElementwiseDivergence_apply_P2VectorToP1ElementwiseDivergence_macro_2D.cpp
      avx/P2VectorToP1ElementwiseDivergence_apply_P2VectorToP1ElementwiseDivergence_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-divergence PRIVATE

      noarch/P2ToP1ElementwiseDivergenceAnnulusMap_0_0_apply_P2ToP1ElementwiseDivergenceAnnulusMap_0_0_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergenceAnnulusMap_0_0_toMatrix_P2ToP1ElementwiseDivergenceAnnulusMap_0_0_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergenceAnnulusMap_0_1_apply_P2ToP1ElementwiseDivergenceAnnulusMap_0_1_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergenceAnnulusMap_0_1_toMatrix_P2ToP1ElementwiseDivergenceAnnulusMap_0_1_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_0_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_1_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_0_apply_P2ToP1ElementwiseDivergence_0_0_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_0_apply_P2ToP1ElementwiseDivergence_0_0_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_0_toMatrix_P2ToP1ElementwiseDivergence_0_0_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_0_toMatrix_P2ToP1ElementwiseDivergence_0_0_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_1_apply_P2ToP1ElementwiseDivergence_0_1_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_1_apply_P2ToP1ElementwiseDivergence_0_1_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_1_toMatrix_P2ToP1ElementwiseDivergence_0_1_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_1_toMatrix_P2ToP1ElementwiseDivergence_0_1_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_2_apply_P2ToP1ElementwiseDivergence_0_2_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_2_apply_P2ToP1ElementwiseDivergence_0_2_macro_3D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_2_toMatrix_P2ToP1ElementwiseDivergence_0_2_macro_2D.cpp
      noarch/P2ToP1ElementwiseDivergence_0_2_toMatrix_P2ToP1ElementwiseDivergence_0_2_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceAnnulusMap_apply_P2VectorToP1ElementwiseDivergenceAnnulusMap_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceAnnulusMap_toMatrix_P2VectorToP1ElementwiseDivergenceAnnulusMap_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_apply_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_toMatrix_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_apply_P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_toMatrix_P2VectorToP1ElementwiseDivergenceCompressibleIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressible_apply_P2VectorToP1ElementwiseDivergenceCompressible_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressible_apply_P2VectorToP1ElementwiseDivergenceCompressible_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressible_toMatrix_P2VectorToP1ElementwiseDivergenceCompressible_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceCompressible_toMatrix_P2VectorToP1ElementwiseDivergenceCompressible_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_apply_P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_toMatrix_P2VectorToP1ElementwiseDivergenceIcosahedralShellMap_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceParametricP2Map_apply_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceParametricP2Map_apply_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceParametricP2Map_toMatrix_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergenceParametricP2Map_toMatrix_P2VectorToP1ElementwiseDivergenceParametricP2Map_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergence_apply_P2VectorToP1ElementwiseDivergence_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergence_apply_P2VectorToP1ElementwiseDivergence_macro_3D.cpp
      noarch/P2VectorToP1ElementwiseDivergence_toMatrix_P2VectorToP1ElementwiseDivergence_macro_2D.cpp
      noarch/P2VectorToP1ElementwiseDivergence_toMatrix_P2VectorToP1ElementwiseDivergence_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-divergence PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-divergence PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-divergence PUBLIC cxx_std_17)
endif ()
