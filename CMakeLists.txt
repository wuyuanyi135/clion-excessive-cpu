cmake_minimum_required(VERSION 3.15)
project(ClionCPU)
include_directories(xtensor/include)
set(CMAKE_CXX_STANDARD 17)

add_executable(ClionCPU main.cpp)