add_library( opgen-div_k_grad

   P1ElementwiseDivKGrad.cpp
   P1ElementwiseDivKGrad.hpp
   P2ElementwiseDivKGrad.cpp
   P2ElementwiseDivKGrad.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-div_k_grad PRIVATE

      avx/P1ElementwiseDivKGrad_apply_macro_2D.cpp
      avx/P1ElementwiseDivKGrad_apply_macro_3D.cpp
      avx/P1ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseDivKGrad_apply_macro_2D.cpp
      avx/P2ElementwiseDivKGrad_apply_macro_3D.cpp
      avx/P2ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P1ElementwiseDivKGrad_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseDivKGrad_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseDivKGrad_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseDivKGrad_toMatrix_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P1ElementwiseDivKGrad_apply_macro_2D.cpp
      avx/P1ElementwiseDivKGrad_apply_macro_3D.cpp
      avx/P1ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P1ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseDivKGrad_apply_macro_2D.cpp
      avx/P2ElementwiseDivKGrad_apply_macro_3D.cpp
      avx/P2ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-div_k_grad PRIVATE

      noarch/P1ElementwiseDivKGrad_apply_macro_2D.cpp
      noarch/P1ElementwiseDivKGrad_apply_macro_3D.cpp
      noarch/P1ElementwiseDivKGrad_toMatrix_macro_2D.cpp
      noarch/P1ElementwiseDivKGrad_toMatrix_macro_3D.cpp
      noarch/P1ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P1ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseDivKGrad_apply_macro_2D.cpp
      noarch/P2ElementwiseDivKGrad_apply_macro_3D.cpp
      noarch/P2ElementwiseDivKGrad_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseDivKGrad_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseDivKGrad_computeInverseDiagonalOperatorValues_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-div_k_grad PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-diffusion PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-diffusion PUBLIC cxx_std_17)
endif ()
