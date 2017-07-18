cmake_minimum_required(VERSION 3.7)
project(tree_c)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES ./cpp/main.cpp ./cpp/evaluator.cpp ./h/evaluator.h ./cpp/emotion.cpp ./h/emotion.h
        ./cpp/user_data.cpp ./h/user_data.h ./cpp/output_manager.cpp ./h/output_manager.h ./cpp/input_manager.cpp ./h/input_manager.h h/constant.h h/color.h cpp/color.cpp)
add_executable(tree_c ${SOURCE_FILES})
