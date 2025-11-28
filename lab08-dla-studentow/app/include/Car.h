#pragma once
#include "Engine.h"
#include "Transmission.h"
#include "Logger.h"
#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;

    Engine engine;
    Transmission transmission;

    static int totalCars;

public:
    Car(const std::string& brand,
        const std::string& model,
        const std::string& engineCode,
        const std::string& transmissionType = "Manual 6-speed");

    ~Car();

    bool start();
    bool stop();
    bool accelerate(double rpm);
    bool shiftUp();
    bool shiftDown();
    void printStatus() const;

    static int getTotalCars() { return totalCars; }

    friend std::ostream& operator<<(std::ostream& os, const Car& c);
};

