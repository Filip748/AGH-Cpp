#ifndef GARAGE_HPP
#define GARAGE_HPP

#include <iostream>
#include <vector>
#include <memory>
#include "Vehicle.hpp"

class Garage {
private:
    std::vector<std::unique_ptr<Vehicle>> vehicles;
public:
    void addVehicle(std::unique_ptr<Vehicle> vehicle);
    void showAllVehicles() const;
    void makeNoise() const ;
    double calculateInsuranceCost() const;
};

#endif