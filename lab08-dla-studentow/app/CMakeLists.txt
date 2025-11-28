project(app)

add_executable(vehicle_simulation
    src/main.cpp
    src/Car.cpp
    src/Logger.cpp
)

target_include_directories(vehicle_simulation
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(vehicle_simulation
    PRIVATE
        engine_lib
        transmission_lib
)
