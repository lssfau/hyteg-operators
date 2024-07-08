add_library( opgen-grad_rho_by_rho_dot_u

   P2VectorToP1ElementwiseGradRhoByRhoDotU.cpp
   P2VectorToP1ElementwiseGradRhoByRhoDotU.hpp
   P2VectorToP1ElementwiseGradRhoByRhoDotUAnnulusMap.cpp
   P2VectorToP1ElementwiseGradRhoByRhoDotUAnnulusMap.hpp
   P2VectorToP1ElementwiseGradRhoByRhoDotUIcosahedralShellMap.cpp
   P2VectorToP1ElementwiseGradRhoByRhoDotUIcosahedralShellMap.hpp
)

target_sources(opgen-grad_rho_by_rho_dot_u PRIVATE

   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotUAnnulusMap_apply_macro_2D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotUAnnulusMap_toMatrix_macro_2D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotUIcosahedralShellMap_apply_macro_3D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotUIcosahedralShellMap_toMatrix_macro_3D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotU_apply_macro_2D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotU_apply_macro_3D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotU_toMatrix_macro_2D.cpp
   noarch/P2VectorToP1ElementwiseGradRhoByRhoDotU_toMatrix_macro_3D.cpp
)

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-grad_rho_by_rho_dot_u PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-grad_rho_by_rho_dot_u PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-grad_rho_by_rho_dot_u PUBLIC cxx_std_17)
endif ()
