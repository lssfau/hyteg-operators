add_library( opgen-curl_curl

   N1E1ElementwiseCurlCurl.cpp
   N1E1ElementwiseCurlCurl.hpp
)

if(HYTEG_BUILD_WITH_AVX)
   target_sources(opgen-curl_curl PRIVATE

      avx/N1E1ElementwiseCurlCurl_apply_macro_3D.cpp
      avx/N1E1ElementwiseCurlCurl_computeInverseDiagonalOperatorValues_macro_3D.cpp
      noarch/N1E1ElementwiseCurlCurl_toMatrix_macro_3D.cpp
   )
else()
   target_sources(opgen-curl_curl PRIVATE

      noarch/N1E1ElementwiseCurlCurl_apply_macro_3D.cpp
      noarch/N1E1ElementwiseCurlCurl_toMatrix_macro_3D.cpp
      noarch/N1E1ElementwiseCurlCurl_computeInverseDiagonalOperatorValues_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-curl_curl PUBLIC PETSc::PETSc)
endif ()
target_compile_features(opgen-curl_curl PUBLIC cxx_std_17)
