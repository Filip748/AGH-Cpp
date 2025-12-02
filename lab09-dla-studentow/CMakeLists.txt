cmake_minimum_required(VERSION 3.10)

project(SimpleRPG)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

# Tryb DEBUG
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -DDEBUG")

# Tryb RELEASE
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

add_executable(SimpleRPG ${SOURCES})
