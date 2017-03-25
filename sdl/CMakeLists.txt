cmake_minimum_required(VERSION 2.6)
project(skeleton)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(SOURCES main.cpp)

add_executable(sdl ${SOURCES})
target_link_libraries(sdl ${SDL2_LIBRARIES})
