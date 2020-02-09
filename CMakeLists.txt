cmake_minimum_required(VERSION 3.14)
project(CExperiments C)

set(CMAKE_C_STANDARD 99)

add_executable(CExperiments main.c Functions.c Functions.h FileHandling.c FileHandling.h Utilities/Colours.c Utilities/Colours.h)