cmake_minimum_required (VERSION 1.0)
project (Example_Bessel)

include_directories ("${PROJECT_SOURCE_DIR}/src")
include_directories ("${PROJECT_SOURCE_DIR}/include")
include_directories(${GSL_INCLUDE_DIRS} ${GSLCBLAS_INCLUDE_DIRS})

add_subdirectory (src)

add_executable (main main.cpp)
target_link_libraries (main src)
