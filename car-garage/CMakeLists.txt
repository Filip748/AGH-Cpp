cmake_minimum_required(VERSION 3.10)
project(CarGarage)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CarGarage 
    src/main.cpp 
    src/Vehicle.cpp
    src/Car.cpp
    src/Truck.cpp
    src/Motorcycle.cpp
    src/Garage.cpp
)

target_include_directories(CarGarage PRIVATE ${CMAKE_SOURCE_DIR}/include)