cmake_minimum_required(VERSION 4.0)
project(lab03)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab03 main.cpp
        human.cpp
        human.h
        Worker.cpp
        Worker.h
        Books.cpp
        Books.h
        Reader.cpp
        Reader.h
        Items.cpp
        Items.h
        Magasine.cpp
        Magasine.h
        CD.cpp
        CD.h
        Location.cpp
        Location.h
)
