cmake_minimum_required(VERSION 3.15)
project(Calendar)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calendar main.cpp Calendar.cpp Calendar.h Event.cpp Event.h ToDo.cpp ToDo.h)