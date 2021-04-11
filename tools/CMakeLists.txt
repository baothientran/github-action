project(tools LANGUAGES CXX)

# meshwork_cli tool
add_executable(tools
    main.cpp)

target_compile_features(tools
    PRIVATE
        cxx_std_17)

target_link_libraries(tools
    PRIVATE
        src)

target_include_directories(tools
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR})
