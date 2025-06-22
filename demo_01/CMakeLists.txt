cmake_minimum_required(VERSION 3.30)
project(demo_01)

set(CMAKE_CXX_STANDARD 98)

add_executable(demo_01 main.cpp)
add_compile_options(-finput-charset=UTF-8 -fexec-charset=UTF-8)

add_executable(main main.cpp)