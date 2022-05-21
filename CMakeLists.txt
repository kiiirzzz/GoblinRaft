cmake_minimum_required(VERSION 3.16.3)

project(raft)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(test)