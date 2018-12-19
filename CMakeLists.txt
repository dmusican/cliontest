cmake_minimum_required(VERSION 3.5.1)
project(cliontest C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang")

add_executable(cliontest main.c)
add_executable(valgrind_cliontest run_valgrind.c)
add_dependencies(valgrind_cliontest cliontest)