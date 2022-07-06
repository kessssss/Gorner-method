cmake_minimum_required(VERSION 3.17)
project(Gornera C)

set(CMAKE_C_STANDARD 99)

add_executable(Gornera main.c  gorner_function.c gorner.h)
