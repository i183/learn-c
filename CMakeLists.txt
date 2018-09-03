cmake_minimum_required(VERSION 3.10)
project(learn_c C)

set(CMAKE_C_STANDARD 99)

add_executable(learn_c cmd/tree.c cmd/fibonacci.c cmd/tree.h cmd/fibonacci.h main.c structure/stack.c structure/stack.h structure/queue.c structure/queue.h common/global.h structure/array.c structure/array.h common/global.c sort/sort.c sort/sort.h)