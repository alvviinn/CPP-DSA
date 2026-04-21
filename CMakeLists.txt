cmake_minimum_required(VERSION 4.2)
project(Embedded1)

set(CMAKE_CXX_STANDARD 20)

add_executable(MainTask main.cpp)
add_executable(DaysTask days_to_seconds.cpp)
add_executable(VolumeTask volume_sphere.cpp)
add_executable(SquareTask Square.cpp)
add_executable(PseudocodeTask pseudocode.cpp)
add_executable(AverageTask average.cpp)
add_executable(CaseTask case_checker.cpp)
