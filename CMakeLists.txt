cmake_minimum_required(VERSION 3.1)

add_executable(enumerate_test test.cpp)
set_target_properties(enumerate_test PROPERTIES COMPILE_FLAGS "-std=c++1z")
