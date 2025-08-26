cmake_minimum_required(VERSION 4.0)
project(MIS_CALIFICACIONES)

set(CMAKE_CXX_STANDARD 20)

add_executable(MIS_CALIFICACIONES main.cpp
        calificaciones_utils.cpp
        calificaciones_utils.h)
