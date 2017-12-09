cmake_minimum_required(VERSION 3.8)
project(ListaTDA2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Nodo.cpp Nodo.h ListaTDA.cpp ListaTDA.h Vertice.cpp Vertice.h Arista.cpp Arista.h Grafofo.cpp Grafofo.h)
add_executable(ListaTDA2 ${SOURCE_FILES})