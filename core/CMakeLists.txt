cmake_minimum_required(VERSION 3.15)
project(SoftwareGUI
        LANGUAGES CXX
        VERSION 0.0.1)

add_subdirectory(software-rendering)

add_library(SoftwareGui SHARED          sogui_view.cpp
                                        application/sogui_application.cpp)
target_include_directories(SoftwareGui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(SoftwareGui PRIVATE SGUI_EXPORT)
target_link_libraries(SoftwareGui srRenderer)