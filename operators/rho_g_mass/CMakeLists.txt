add_library( opgen-rho_g_mass

   P1ToP2VectorElementwiseRhoGMassAnnulusMap.cpp
   P1ToP2VectorElementwiseRhoGMassAnnulusMap.hpp
   P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap.cpp
   P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap.hpp
   P2ToP2VectorElementwiseRhoGMassAnnulusMap.cpp
   P2ToP2VectorElementwiseRhoGMassAnnulusMap.hpp
   P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap.cpp
   P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap.hpp
)
target_link_libraries( opgen-rho_g_mass PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-rho_g_mass PRIVATE

      avx/P1ToP2VectorElementwiseRhoGMassAnnulusMap_applyScaled_P1ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      avx/P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_applyScaled_P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      avx/P2ToP2VectorElementwiseRhoGMassAnnulusMap_applyScaled_P2ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      avx/P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_applyScaled_P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      noarch/P1ToP2VectorElementwiseRhoGMassAnnulusMap_toMatrixScaled_P1ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      noarch/P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_toMatrixScaled_P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ToP2VectorElementwiseRhoGMassAnnulusMap_toMatrixScaled_P2ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      noarch/P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_toMatrixScaled_P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
   )

   set_source_files_properties(

      avx/P1ToP2VectorElementwiseRhoGMassAnnulusMap_applyScaled_P1ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      avx/P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_applyScaled_P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      avx/P2ToP2VectorElementwiseRhoGMassAnnulusMap_applyScaled_P2ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      avx/P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_applyScaled_P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-rho_g_mass PRIVATE

      noarch/P1ToP2VectorElementwiseRhoGMassAnnulusMap_applyScaled_P1ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      noarch/P1ToP2VectorElementwiseRhoGMassAnnulusMap_toMatrixScaled_P1ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      noarch/P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_applyScaled_P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      noarch/P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_toMatrixScaled_P1ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ToP2VectorElementwiseRhoGMassAnnulusMap_applyScaled_P2ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      noarch/P2ToP2VectorElementwiseRhoGMassAnnulusMap_toMatrixScaled_P2ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D.cpp
      noarch/P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_applyScaled_P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
      noarch/P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_toMatrixScaled_P2ToP2VectorElementwiseRhoGMassIcosahedralShellMap_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-rho_g_mass PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-rho_g_mass PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-rho_g_mass PUBLIC cxx_std_17)
endif ()
