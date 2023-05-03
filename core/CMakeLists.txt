cmake_minimum_required(VERSION 3.15)
project(SGuiCore
        LANGUAGES CXX
        VERSION 0.0.1)

add_subdirectory(software-rendering)

add_library(SGuiCore SHARED sogui_view.cpp
        application/sogui_application.cpp)
target_include_directories(SGuiCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(SGuiCore PRIVATE SGUI_EXPORT)
target_link_libraries(SGuiCore srRenderer)