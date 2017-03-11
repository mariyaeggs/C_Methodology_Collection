cmake_minimum_required(VERSION 3.6)
project(Stacks_DynamicArray)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES DStack_Tester.cpp DStack.cpp DStack.h)
add_executable(Stacks_DynamicArray ${SOURCE_FILES})
