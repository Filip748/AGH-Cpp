project(ActionLib)

add_library(ActionLib STATIC
    src/Hero.cpp
    src/Action.cpp
    src/ActionQueue.cpp
)

target_include_directories(ActionLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/include
)

target_compile_features(ActionLib PUBLIC cxx_std_17)