cmake_minimum_required (VERSION 1.0)
project (BESSEL)

#add_library(include Alg.cxx)

include_directories("${PROJECT_SOURCE_DIR}/include/")
add_subdirectory(include)

#add_subdirectory(src)

add_executable(main main.cpp)
target_link_libraries (main include)
