cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(PathFinding LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(
    ins
    src
)

add_executable(
    pathfinding
    src/test.cpp
)