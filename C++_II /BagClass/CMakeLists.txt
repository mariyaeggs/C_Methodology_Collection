cmake_minimum_required(VERSION 3.5)
project(BagClass)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp bag.h bag.cpp)
add_executable(BagClass ${SOURCE_FILES})