cmake_minimum_required(VERSION 3.16)

project(LibrarySystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT DEFINED MODE)
    set(MODE "PUBLIC")
endif()

message(STATUS "Wybrany tryb kompilacji: ${MODE}")

if(MODE STREQUAL "PUBLIC")
    add_compile_definitions(PUBLIC_MODE)
elseif(MODE STREQUAL "PRIVATE")
    add_compile_definitions(PRIV_MODE)
else()
    message(FATAL_ERROR "Nieznany tryb MODE. Użyj: PUBLIC albo PRIVATE")
endif()

include_directories(include)

file(GLOB SOURCES src/*.cpp)

add_executable(LibrarySystem ${SOURCES})

