cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Solution VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_CLANG_TIDY clang-tidy -checks=-*,readability-*)

# add the executable
add_executable(Solution src/main.cpp)

target_include_directories(Solution PUBLIC ${PROJECT_BINARY_DIR})