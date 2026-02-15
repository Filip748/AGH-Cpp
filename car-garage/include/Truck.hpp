#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Vehicle.hpp"
#include <iostream>

class Truck : public Vehicle {
private:
    int _loadCapacity;
public:
    Truck(std::string& brand, std::string& model, int year, int loadCapacity);

    int getLoadCapacity() const { return _loadCapacity; }

    void showInfo() const override;
    void honk() const override;
    double calculateCostInsurance() const override;
};

#endif