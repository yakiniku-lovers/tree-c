cmake_minimum_required(VERSION 3.7)
project(tree_c)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp evaluator.cpp evaluator.h emotion.cpp emotion.h user_data.cpp user_data.h output_manager.cpp output_manager.h input_manager.cpp input_manager.h)
add_executable(tree_c ${SOURCE_FILES})
