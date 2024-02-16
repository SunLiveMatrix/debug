cmake_minimum_required(VERSION 3.28)
project(debug)

set(CMAKE_CXX_STANDARD 17)

add_executable(debug main.cpp
        scripts/explore/spaces.cpp
        scripts/explore/spaces.h
        scripts/explore/apache/settext.cpp
        scripts/explore/apache/settext.h
)
