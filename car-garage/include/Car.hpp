#ifndef CAR_HPP
#define CAR_HPP

#include "Vehicle.hpp"
#include <iostream>

enum class EngineType {
    Petrol,
    Diesel,
    Electric,
    Hybrid
};

class Car : public Vehicle {
private:
    int _door;
    EngineType _engine;
public:
    Car(std::string& brand, std::string& model, int year, int door, EngineType engine);

    std::string engineToString(EngineType engine) const;

    int getDoor() const { return _door; }
    EngineType getEngine() const { return _engine; }

    void showInfo() const override;
    void honk() const override;
    double calculateCostInsurance() const override;
};

#endif