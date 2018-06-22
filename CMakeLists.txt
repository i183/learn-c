cmake_minimum_required(VERSION 3.10)
project(learn_c C)

set(CMAKE_C_STANDARD 99)

add_executable(learn_c tree.c fibonacci.c tree.h fibonacci.h main.c structure/stack.c structure/stack.h structure/queue.c structure/queue.h common.h structure/array.c structure/array.h common.c)