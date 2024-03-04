add_library( opgen-full_stokes

   P2ElementwiseFullStokesIcosahedralShellMap_0_0.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_0_0.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_0_1.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_0_1.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_0_2.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_0_2.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_1_0.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_1_0.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_1_1.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_1_1.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_1_2.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_1_2.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_2_0.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_2_0.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_2_1.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_2_1.hpp
   P2ElementwiseFullStokesIcosahedralShellMap_2_2.cpp
   P2ElementwiseFullStokesIcosahedralShellMap_2_2.hpp
   P2ElementwiseFullStokes_0_0.cpp
   P2ElementwiseFullStokes_0_0.hpp
   P2ElementwiseFullStokes_0_1.cpp
   P2ElementwiseFullStokes_0_1.hpp
   P2ElementwiseFullStokes_0_2.cpp
   P2ElementwiseFullStokes_0_2.hpp
   P2ElementwiseFullStokes_1_0.cpp
   P2ElementwiseFullStokes_1_0.hpp
   P2ElementwiseFullStokes_1_1.cpp
   P2ElementwiseFullStokes_1_1.hpp
   P2ElementwiseFullStokes_1_2.cpp
   P2ElementwiseFullStokes_1_2.hpp
   P2ElementwiseFullStokes_2_0.cpp
   P2ElementwiseFullStokes_2_0.hpp
   P2ElementwiseFullStokes_2_1.cpp
   P2ElementwiseFullStokes_2_1.hpp
   P2ElementwiseFullStokes_2_2.cpp
   P2ElementwiseFullStokes_2_2.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-full_stokes PRIVATE

      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_0_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_0_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseFullStokes_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_1_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_0_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_1_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_1_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseFullStokes_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_2_toMatrix_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokesIcosahedralShellMap_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_0_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_0_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_0_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseFullStokes_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_1_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_0_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_0_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_0_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_1_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_1_apply_macro_2D.cpp
      avx/P2ElementwiseFullStokes_1_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_1_computeInverseDiagonalOperatorValues_macro_2D.cpp
      avx/P2ElementwiseFullStokes_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      avx/P2ElementwiseFullStokes_1_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_0_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_1_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_2_apply_macro_3D.cpp
      avx/P2ElementwiseFullStokes_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-full_stokes PRIVATE

      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_0_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_1_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_2_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_0_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_1_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_2_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_0_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_1_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_2_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokesIcosahedralShellMap_2_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_0_apply_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_0_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_0_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_0_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_1_apply_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_1_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_0_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_2_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_0_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_0_apply_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_0_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_0_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_1_apply_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_1_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_1_computeInverseDiagonalOperatorValues_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_1_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_1_toMatrix_macro_2D.cpp
      noarch/P2ElementwiseFullStokes_1_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_2_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_1_2_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_0_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_0_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_1_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_1_toMatrix_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_2_apply_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_2_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/P2ElementwiseFullStokes_2_2_toMatrix_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-full_stokes PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-full_stokes PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-full_stokes PUBLIC cxx_std_17)
endif ()
