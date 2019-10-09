cmake_minimum_required(VERSION 3.13)
project(ThreadScheduler C)

set(CMAKE_C_STANDARD 11)

add_executable(ThreadScheduler main.c headers/prova.h src/prova.cpp)