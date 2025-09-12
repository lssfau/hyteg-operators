add_library( opgen-curl_curl

   N1E1ElementwiseCurlCurl.cpp
   N1E1ElementwiseCurlCurl.hpp
)
target_link_libraries( opgen-curl_curl PRIVATE hyteg )

if(HYTEG_BUILD_WITH_AVX AND WALBERLA_DOUBLE_ACCURACY)
   target_sources(opgen-curl_curl PRIVATE

      avx/N1E1ElementwiseCurlCurl_applyScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
      avx/N1E1ElementwiseCurlCurl_computeInverseDiagonalOperatorValuesScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
      noarch/N1E1ElementwiseCurlCurl_toMatrixScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
   )

   set_source_files_properties(

      avx/N1E1ElementwiseCurlCurl_applyScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
      avx/N1E1ElementwiseCurlCurl_computeInverseDiagonalOperatorValuesScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp

      PROPERTIES COMPILE_OPTIONS ${HYTEG_COMPILER_NATIVE_FLAGS}
   )
else()
   if(HYTEG_BUILD_WITH_AVX AND NOT WALBERLA_DOUBLE_ACCURACY)
      message(WARNING "AVX vectorization only available in double precision. Using scalar kernels.")
   endif()

   target_sources(opgen-curl_curl PRIVATE

      noarch/N1E1ElementwiseCurlCurl_applyScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
      noarch/N1E1ElementwiseCurlCurl_computeInverseDiagonalOperatorValuesScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
      noarch/N1E1ElementwiseCurlCurl_toMatrixScaled_N1E1ElementwiseCurlCurl_macro_3D.cpp
   )
endif()

if (HYTEG_BUILD_WITH_PETSC)
   target_link_libraries(opgen-curl_curl PUBLIC PETSc::PETSc)
endif ()
if (WALBERLA_BUILD_WITH_HALF_PRECISION_SUPPORT)
    target_compile_features(opgen-curl_curl PUBLIC cxx_std_23)
else ()
    target_compile_features(opgen-curl_curl PUBLIC cxx_std_17)
endif ()
