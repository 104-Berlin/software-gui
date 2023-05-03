cmake_minimum_required(VERSION 3.15)
project(SGui)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory(core)

add_executable(SGuiTest main.cpp)
target_link_libraries(SGuiTest SGuiCore)
