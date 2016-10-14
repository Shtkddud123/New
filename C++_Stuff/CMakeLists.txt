cmake_minimum_required (VERSION 1.0)
project (ODE_SYSTEMS)

# Ensure C++11 is invoked
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# include directories for headers and CXX files

include_directories ("${PROJECT_SOURCE_DIR}/src")
include_directories ("${PROJECT_SOURCE_DIR}/include")
include_directories(${GSL_INCLUDE_DIRS} ${GSLCBLAS_INCLUDE_DIRS})
include_directories(${BOOST_INCLUDE_DIRS})

# Specifically add the src library definition for linking

add_subdirectory (src)
set (EXTRA_LIBS ${EXTRA_LIBS} src)

# GSL libraries linking
set(CMAKE_GSL_LINKER_FLAGS "${CMAKE_GSL_LINKER_FLAGS} -lgsl")
set(CMAKE_GSL_LINKER_FLAGS_CBLAS "${CMAKE_GSL_LINKER_FLAGS_CBLAS} -lgslcblas")
set(MATH "${MATH} -lm")
set(BOOST_FILE "${BOOST_FILE} -lboost_filesystem")

# add the executable
add_executable (main main.cxx)
target_link_libraries (main ${CMAKE_GSL_LINKER_FLAGS} ${CMAKE_GSL_LINKER_FLAGS_CBLAS} ${EXTRA_LIBS} ${BOOST_LIBRARIES} ${BOOST_FILE} ${MATH})

