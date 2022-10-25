cmake_minimum_required(VERSION 3.0)

# set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(cartesian_vector_param)

# add the executable
add_executable(main main.cc vector.cpp)
