# To build the project, run the following commands:
# 1.$ mkdir build
# 2.$ cd build
# 3.$ cmake ..
# 4.$ make
# 5.$ ./cmake_deneme

cmake_minimum_required(VERSION 3.10)

# Set the project name
project(cmake_deneme)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(cmake_deneme main.cpp CWaitForFullSeconds.cpp)

