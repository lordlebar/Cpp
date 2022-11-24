cmake_minimum_required(VERSION 3.0)
project(selection_sort_file)

set(CMAKE_CXX_STANDARD 20)

add_executable(main set_operations.hpp main.cc)

# Compilation optimization
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")