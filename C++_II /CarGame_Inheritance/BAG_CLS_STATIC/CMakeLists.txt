cmake_minimum_required(VERSION 3.5)
project(BAG_CLS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES driver.cpp bag.cpp bag.h)
add_executable(BAG_CLS ${SOURCE_FILES})