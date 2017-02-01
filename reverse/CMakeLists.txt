cmake_minimum_required(VERSION 3.6)
project(reverse)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)
file(GLOB cpps src/*.cpp)
file(GLOB hpps src/*.hpp)

add_library(reverse ${cpps} ${hpps})

set(SOURCE_FILES main.cpp)
add_executable(reverseit ${SOURCE_FILES})
target_link_libraries(reverseit yell)

add_subdirectory(test)
