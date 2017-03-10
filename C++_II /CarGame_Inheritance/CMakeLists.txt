cmake_minimum_required(VERSION 3.5)
project(Car_Game)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES driver.cpp)
add_executable(Car_Game ${SOURCE_FILES})