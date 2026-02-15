#include "Garage.hpp"

void Garage::addVehicle(std::unique_ptr<Vehicle> vehicle) {
    vehicles.push_back(std::move(vehicle));
}

void Garage::showAllVehicles() const {
    if(vehicles.empty()) {
        std::cout << " Garage is empty";
        return;
    }

    for (const auto& v : vehicles) {
        v->showInfo();
    }
}

void Garage::makeNoise() const {
    if(vehicles.empty()) {
        std::cout << "SILENCE";
        return;
    }

    for (const auto& v : vehicles) {
        v->honk();
    }
}

double Garage::calculateInsuranceCost() const {
    double totalCost = 0.0;

    for (const auto& v : vehicles) {
        totalCost += v->calculateCostInsurance();
    }
    return totalCost;
}