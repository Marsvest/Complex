cmake_minimum_required(VERSION 3.25)
project(Complex)

set(CMAKE_CXX_STANDARD 17)

set(HEADER_FILES
        complex_class.h
)

add_test(NAME Google_Tests COMMAND Google_Tests_run)

target_sources(Complex_lib INTERFACE ${HEADER_FILES})

target_include_directories(Complex_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})