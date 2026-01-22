cmake_minimum_required(VERSION 3.10)
project(rpg_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Katalogi nagłówkowe
include_directories(include)

# Pliki źródłowe
set(SOURCES
    main.cpp
    src/Entity.cpp
    src/Character.cpp
    src/Warrior.cpp
    src/Mage.cpp
    src/Knight.cpp
    src/Rogue.cpp
)

# Tworzenie pliku wykonywalnego
add_executable(rpg ${SOURCES})