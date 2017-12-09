cmake_minimum_required(VERSION 3.8)
project(List)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Node.cpp Node.h List.cpp List.h functions.cpp)
add_executable(List ${SOURCE_FILES})