cmake_minimum_required(VERSION 3.26)
project(Assignment2)

set(CMAKE_CXX_STANDARD 17)

#Need to make this change manually to include all the source files, so that compiler can understand the different functions and variables from custom created source/header files
set(SOURCE_FILES main.cpp Item.cpp ItemCollection.cpp)
add_executable(Assignment2 ${SOURCE_FILES})
