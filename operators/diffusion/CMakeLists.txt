add_library( opgen-diffusion

   P1ElementwiseDiffusion.cpp
   P1ElementwiseDiffusion.hpp
   P2ElementwiseDiffusion.cpp
   P2ElementwiseDiffusion.hpp
   P2ElementwiseDiffusionAnnulusMap.cpp
   P2ElementwiseDiffusionAnnulusMap.hpp
   P2ElementwiseDiffusionIcosahedralShellMap.cpp
   P2ElementwiseDiffusionIcosahedralShellMap.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-diffusion PRIVATE

      avx/P1ElementwiseDiffusion_apply_P1ElementwiseDiffusion_macro_2D.cpp
      avx/P1ElementwiseDiffusion_apply_P1ElementwiseDiffusion_macro_3D.cpp
      avx/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P1ElementwiseDiffusion_macro_2D.cpp
      avx/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P1ElementwiseDiffusion_macro_3D.cpp
      avx/P2ElementwiseDiffusionAnnulusMap_apply_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseDiffusionAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseDiffusionIcosahedralShellMap_apply_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseDiffusionIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseDiffusion_apply_P2ElementwiseDiffusion_macro_2D.cpp
      avx/P2ElementwiseDiffusion_apply_P2ElementwiseDiffusion_macro_3D.cpp
      avx/P2ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusion_macro_2D.cpp
      avx/P2ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusion_macro_3D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_P1ElementwiseDiffusion_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_P1ElementwiseDiffusion_macro_3D.cpp
      noarch/P2ElementwiseDiffusionAnnulusMap_toMatrix_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseDiffusionIcosahedralShellMap_toMatrix_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseDiffusion_toMatrix_P2ElementwiseDiffusion_macro_2D.cpp
      noarch/P2ElementwiseDiffusion_toMatrix_P2ElementwiseDiffusion_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P1ElementwiseDiffusion_apply_P1ElementwiseDiffusion_macro_2D.cpp
      avx/P1ElementwiseDiffusion_apply_P1ElementwiseDiffusion_macro_3D.cpp
      avx/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P1ElementwiseDiffusion_macro_2D.cpp
      avx/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P1ElementwiseDiffusion_macro_3D.cpp
      avx/P2ElementwiseDiffusionAnnulusMap_apply_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseDiffusionAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      avx/P2ElementwiseDiffusionIcosahedralShellMap_apply_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseDiffusionIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      avx/P2ElementwiseDiffusion_apply_P2ElementwiseDiffusion_macro_2D.cpp
      avx/P2ElementwiseDiffusion_apply_P2ElementwiseDiffusion_macro_3D.cpp
      avx/P2ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusion_macro_2D.cpp
      avx/P2ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusion_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-diffusion PRIVATE

      noarch/P1ElementwiseDiffusion_apply_P1ElementwiseDiffusion_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_apply_P1ElementwiseDiffusion_macro_3D.cpp
      noarch/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P1ElementwiseDiffusion_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P1ElementwiseDiffusion_macro_3D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_P1ElementwiseDiffusion_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_P1ElementwiseDiffusion_macro_3D.cpp
      noarch/P2ElementwiseDiffusionAnnulusMap_apply_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseDiffusionAnnulusMap_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseDiffusionAnnulusMap_toMatrix_P2ElementwiseDiffusionAnnulusMap_macro_2D.cpp
      noarch/P2ElementwiseDiffusionIcosahedralShellMap_apply_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseDiffusionIcosahedralShellMap_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseDiffusionIcosahedralShellMap_toMatrix_P2ElementwiseDiffusionIcosahedralShellMap_macro_3D.cpp
      noarch/P2ElementwiseDiffusion_apply_P2ElementwiseDiffusion_macro_2D.cpp
      noarch/P2ElementwiseDiffusion_apply_P2ElementwiseDiffusion_macro_3D.cpp
      noarch/P2ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusion_macro_2D.cpp
      noarch/P2ElementwiseDiffusion_computeInverseDiagonalOperatorValues_P2ElementwiseDiffusion_macro_3D.cpp
      noarch/P2ElementwiseDiffusion_toMatrix_P2ElementwiseDiffusion_macro_2D.cpp
      noarch/P2ElementwiseDiffusion_toMatrix_P2ElementwiseDiffusion_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-diffusion PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-diffusion PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-diffusion PUBLIC cxx_std_17)
endif ()
