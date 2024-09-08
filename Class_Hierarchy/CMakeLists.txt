cmake_minimum_required(VERSION 3.10)

project(Class_Hierarchy)

set(SOURCES
    src/main.cpp
    src/Figure.cpp
    src/Figure.hpp
    src/Triangle.cpp
    src/Triangle.hpp
    src/Quandrangle.cpp
    src/Quandrangle.hpp
)

add_executable(Class_Hierarchy ${SOURCES})

add_compile_options(-DUNICODE)
