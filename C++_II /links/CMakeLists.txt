cmake_minimum_required(VERSION 3.5)
project(links)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES driver.cpp)
add_executable(links ${SOURCE_FILES})