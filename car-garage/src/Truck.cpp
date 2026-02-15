#include "Truck.hpp"

Truck::Truck(std::string brand, std::string model, int year, int loadCapacity)
    : Vehicle(brand, model, year), _loadCapacity(loadCapacity) {}

void Truck::showInfo() const {
    std::cout << "TRUCK: { " << getBrand() << ", " << getModel()
        << ", " << getYear() << ", " << getLoadCapacity() << " }\n";
}

void Truck::honk() const {
    std::cout << "*TRUCK HONK*\n";
}

double Truck::calculateCostInsurance() const{
    double basePrice = 2000.0;

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int currentYear = now->tm_year + 1900;

    int carAge = currentYear - getYear();

    return basePrice + (carAge * 100.0);
}