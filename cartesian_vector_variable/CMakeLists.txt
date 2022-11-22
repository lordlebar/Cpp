cmake_minimum_required(VERSION 3.0)

# set the project name
project(cartesian_vector_variable)

# add the executable
add_executable(main vector.cpp main.cc)

# Compilation optimization
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")