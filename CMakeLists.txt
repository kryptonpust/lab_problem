cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES 1_1/pointer_problem/prb_20.39.c)
add_executable(untitled ${SOURCE_FILES})
target_link_libraries(untitled m)