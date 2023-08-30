cmake_minimum_required(VERSION 3.26)
project(untitled_0829_01)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(untitled_0829_01
        src/main.cpp
        src/processor.cpp
        src/processor.h
        src/processor_mapper.cpp
        src/processor_mapper.h
)
