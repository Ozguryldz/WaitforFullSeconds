cmake_minimum_required(VERSION 3.10)

# Set the project name
project(cmake_deneme)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(cmake_deneme main.cpp CWaitForFullSeconds.cpp)