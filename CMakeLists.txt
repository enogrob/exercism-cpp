cmake_minimum_required(VERSION 3.4)
project(tutorial_exercism)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/cpp/bob/main.cpp)
add_executable(tutorial_exercism ${SOURCE_FILES} src/cpp/bob/bob.cpp src/cpp/bob/bob.h)



