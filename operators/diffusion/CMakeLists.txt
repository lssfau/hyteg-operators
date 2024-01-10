add_library( opgen-diffusion

   P1ElementwiseDiffusion.cpp
   P1ElementwiseDiffusion.hpp
)

if(HYTEG_BUILD_WITH_AVX)
   target_sources(opgen-diffusion PRIVATE

      avx/P1ElementwiseDiffusion_apply_macro_2D.cpp
      avx/P1ElementwiseDiffusion_apply_macro_3D.cpp
      avx/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_macro_3D.cpp
   )
else()
   target_sources(opgen-diffusion PRIVATE

      noarch/P1ElementwiseDiffusion_apply_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_apply_macro_3D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_toMatrix_macro_3D.cpp
      noarch/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P1ElementwiseDiffusion_computeInverseDiagonalOperatorValues_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-diffusion PUBLIC PETSc::PETSc)
endif ()
target_compile_features(opgen-diffusion PUBLIC cxx_std_17)
