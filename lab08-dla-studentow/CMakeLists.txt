cmake_minimum_required(VERSION 3.16)
project(CWL3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Dodaj podkatalogi
add_subdirectory(engine_lib)
add_subdirectory(transmission_lib)
add_subdirectory(app)
