#include "Car.hpp"
#include <string>
#include <ctime>

Car::Car(std::string brand, std::string model, int year, int door, EngineType engine)
    : Vehicle(brand, model, year), _door(door), _engine(engine) {}

std::string Car::engineToString(EngineType engine) const {
            switch(engine) {
                case EngineType::Petrol: return "Petrol";
                case EngineType::Diesel: return "Diesel";
                case EngineType::Electric: return "Electric";
                case EngineType::Hybrid: return "Hybrid";
                default: return "No data!";
        }
}

void Car::showInfo() const {
    std::cout << "CAR: { " << getBrand() << ", " << getModel()
        << ", " << getYear() << ", " << engineToString(getEngine()) << ", " << getDoor() << " }\n";
}

void Car::honk() const {
    std::cout << "*CAR HONK*\n";
}

double Car::calculateCostInsurance() const{
    double basePrice = 800.0;

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int currentYear = now->tm_year + 1900;

    int carAge = currentYear - getYear();

    return basePrice + (carAge * 50.0);
}

