cmake_minimum_required(VERSION 3.12)
project(ThreadScheduler)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

add_executable(ThreadScheduler
        headers/prova.h
        src/prova.cpp
        main.c)
