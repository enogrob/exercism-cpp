cmake_minimum_required(VERSION 3.4)
project(tutorial_exercism)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/cpp/leap/main.cpp src/cpp/leap/leap.cpp src/cpp/leap/leap.h)
add_executable(tutorial_exercism ${SOURCE_FILES} src/cpp/leap/leap.cpp src/cpp/leap/leap.h)



