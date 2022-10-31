cmake_minimum_required(VERSION 3.15)
project(SoftwareGUI
        LANGUAGES CXX
        VERSION 0.0.1)

add_subdirectory(software-rendering)

add_library(SoftwareGui SHARED application/sogui_application.cpp)
target_link_libraries(SoftwareGui srRenderer)