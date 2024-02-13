add_compile_options( "-Wno-shadow" )

if(NOT WALBERLA_DOUBLE_ACCURACY)
   add_compile_options( "-Wno-float-conversion" )
endif()

add_subdirectory(full_stokes)
