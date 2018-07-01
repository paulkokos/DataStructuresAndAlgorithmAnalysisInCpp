cmake_minimum_required(VERSION 3.10)
project(DataStructuresAndAlgorithmAnalysisInCpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

#add_subdirectory(Chapter01/Figure01-02)
#add_executable(DataStructuresAndAlgorithmAnalysisInCpp main.cpp)
add_executable(Chapter01Figure01-02 Chapter01/Figure01-02/main.cpp)
add_executable(Chapter01Figure01-03 Chapter01/Figure01-03/main.cpp)
add_executable(Chapter01Figure01-04 Chapter01/Figure01-04/main.cpp)
add_executable(Chapter01Figure01-05 Chapter01/Figure01-05/main.cpp Chapter01/Figure01-05/IntCell.cpp Chapter01/Figure01-05/IntCell.h)
