project(engine_lib)

add_library(engine_lib
    src/Engine.cpp
)

target_include_directories(engine_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
