# CMakeList.txt : CMake project for Max-Min-Grouping, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Max-Min-Grouping")

# Add source to this project's executable.
add_executable (Max-Min-Grouping "main.cpp"  "Max-Min-Grouping.h" "d_matrix.h" "d_except.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Max-Min-Grouping PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
