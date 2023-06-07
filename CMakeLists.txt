cmake_minimum_required(VERSION 3.25)
project(cpp_lab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(lab1)

add_executable(cpp_lab
        lab1/float_output.cpp)
