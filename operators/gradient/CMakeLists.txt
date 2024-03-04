add_library( opgen-gradient

   P1ToP2ElementwiseGradientIcosahedralShellMap_0_0.cpp
   P1ToP2ElementwiseGradientIcosahedralShellMap_0_0.hpp
   P1ToP2ElementwiseGradientIcosahedralShellMap_1_0.cpp
   P1ToP2ElementwiseGradientIcosahedralShellMap_1_0.hpp
   P1ToP2ElementwiseGradientIcosahedralShellMap_2_0.cpp
   P1ToP2ElementwiseGradientIcosahedralShellMap_2_0.hpp
   P1ToP2ElementwiseGradient_0_0.cpp
   P1ToP2ElementwiseGradient_0_0.hpp
   P1ToP2ElementwiseGradient_1_0.cpp
   P1ToP2ElementwiseGradient_1_0.hpp
   P1ToP2ElementwiseGradient_2_0.cpp
   P1ToP2ElementwiseGradient_2_0.hpp
)

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-gradient PRIVATE

      avx/P1ToP2ElementwiseGradientIcosahedralShellMap_0_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradientIcosahedralShellMap_1_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradientIcosahedralShellMap_2_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradient_0_0_apply_macro_2D.cpp
      avx/P1ToP2ElementwiseGradient_0_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradient_1_0_apply_macro_2D.cpp
      avx/P1ToP2ElementwiseGradient_1_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradient_2_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_0_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_1_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_2_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_0_0_toMatrix_macro_2D.cpp
      noarch/P1ToP2ElementwiseGradient_0_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_1_0_toMatrix_macro_2D.cpp
      noarch/P1ToP2ElementwiseGradient_1_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_2_0_toMatrix_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P1ToP2ElementwiseGradientIcosahedralShellMap_0_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradientIcosahedralShellMap_1_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradientIcosahedralShellMap_2_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradient_0_0_apply_macro_2D.cpp
      avx/P1ToP2ElementwiseGradient_0_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradient_1_0_apply_macro_2D.cpp
      avx/P1ToP2ElementwiseGradient_1_0_apply_macro_3D.cpp
      avx/P1ToP2ElementwiseGradient_2_0_apply_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-gradient PRIVATE

      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_0_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_0_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_1_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_1_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_2_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradientIcosahedralShellMap_2_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_0_0_apply_macro_2D.cpp
      noarch/P1ToP2ElementwiseGradient_0_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_0_0_toMatrix_macro_2D.cpp
      noarch/P1ToP2ElementwiseGradient_0_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_1_0_apply_macro_2D.cpp
      noarch/P1ToP2ElementwiseGradient_1_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_1_0_toMatrix_macro_2D.cpp
      noarch/P1ToP2ElementwiseGradient_1_0_toMatrix_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_2_0_apply_macro_3D.cpp
      noarch/P1ToP2ElementwiseGradient_2_0_toMatrix_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-gradient PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-gradient PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-gradient PUBLIC cxx_std_17)
endif ()
