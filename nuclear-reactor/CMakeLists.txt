cmake_minimum_required(VERSION 3.10)

# Nazwa projektu
project(ReactorSimulation)

# Ustawienie standardu C++ (C++17 jest bezpiecznym i nowoczesnym wyborem)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Opcjonalnie: włącz ostrzeżenia kompilatora (dobre dla nauki)
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra)
endif()

# Definiujemy pliki źródłowe
# Możesz wpisać je ręcznie lub zgrupować w zmiennej
set(SOURCES
    main.cpp
    src/Reactor.cpp
    src/SafetySystem.cpp
)

# Tworzymy plik wykonywalny o nazwie ReactorApp
add_executable(ReactorApp ${SOURCES})