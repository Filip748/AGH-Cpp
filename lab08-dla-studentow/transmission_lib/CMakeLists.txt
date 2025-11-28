project(transmission_lib)

add_library(transmission_lib
    src/Transmission.cpp
)

target_include_directories(transmission_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
