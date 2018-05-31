cmake_minimum_required(VERSION 3.10)
project(HW3)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(HW3
        EnglishWeight.cpp
        EnglishWeight.h
        EW_Driver.cpp
        test.cpp)
