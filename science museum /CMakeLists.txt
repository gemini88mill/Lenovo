cmake_minimum_required(VERSION 3.3)
project(science_museum_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES sciencemusuem.c)
add_executable(science_museum_ ${SOURCE_FILES})