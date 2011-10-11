cmake_minimum_required (VERSION 2.6)
project (Tutorial)
# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 13)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
include_directories("../gtest-1.6.0/include")
 
link_directories("../gtest-1.6.0/gtest-bin/")

# add the executable
add_executable(TutorialTest SimpleTest.cpp MySqrt.cpp)
target_link_libraries(TutorialTest gtest)

add_executable(Tutorial Tutorial.cpp MySqrt.cpp)
