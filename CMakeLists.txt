cmake_minimum_required(VERSION 3.29)
project(First_alis)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


add_executable(new_target Director.cpp
        Director.h
        Film.cpp
        Film.h
        Studio.h
        Studio.cpp
        main.cpp)
