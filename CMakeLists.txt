cmake_minimum_required(VERSION 3.20)

project(op_lab1_chess_cell LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lab1_chess_cell
    src/main.cpp
    src/chess_cell.cpp
)

target_include_directories(lab1_chess_cell PRIVATE include)

