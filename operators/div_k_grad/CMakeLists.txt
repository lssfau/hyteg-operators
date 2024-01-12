add_library( opgen-div_k_grad

   P1ElementwiseDivKGrad.cpp
   P1ElementwiseDivKGrad.hpp
   P2ElementwiseDivKGrad.cpp
   P2ElementwiseDivKGrad.hpp
)

if(HYTEG_BUILD_WITH_AVX)
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
target_compile_features(opgen-div_k_grad PUBLIC cxx_std_17)
