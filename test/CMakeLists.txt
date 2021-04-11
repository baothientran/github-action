project(test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(doctest REQUIRED)

add_executable(test
    example_test.cpp
    main.cpp)

target_compile_features(test PRIVATE cxx_std_17)

target_link_libraries(test
    PRIVATE
        doctest::doctest
        src
)

target_include_directories(test
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR})
