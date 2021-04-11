project(src LANGUAGES CXX)

add_library(src
    math_utility.h
    math_utility.cpp
)

target_compile_features(src
    PRIVATE
        cxx_std_17)

target_include_directories(src
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})
