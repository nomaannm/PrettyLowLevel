cmake_minimum_required(VERSION 3.10)

# Project name and version
project(OS VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable target
add_executable(OS src/ProcessManagement.cpp)
