add_compile_options( "-Wno-shadow" )

if(NOT WALBERLA_DOUBLE_ACCURACY)
   add_compile_options( "-Wno-float-conversion" )
endif()

add_subdirectory(curl_curl)
add_subdirectory(diffusion)
add_subdirectory(div_k_grad)
add_subdirectory(mass)
