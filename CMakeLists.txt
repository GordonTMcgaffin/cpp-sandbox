cmake_minimum_required(VERSION 4.1)
project(cpp_sandbox)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_sandbox
        main.cpp
        main.h
)
