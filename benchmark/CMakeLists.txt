project(benchmark LANGUAGES CXX)

find_package(benchmark REQUIRED)

add_executable(benchmark
    main.cpp)

target_compile_features(benchmark
    PRIVATE
        cxx_std_17)

target_link_libraries(benchmark
    PRIVATE
        benchmark::benchmark
        src)

target_include_directories(benchmark
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})
