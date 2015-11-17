cmake_minimum_required(VERSION 3.3)
project(dallas_buyers_club)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES dallas_buyers_club.c)
add_executable(dallas_buyers_club ${SOURCE_FILES})