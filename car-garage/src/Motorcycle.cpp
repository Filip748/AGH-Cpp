#include "Motorcycle.hpp"
#include "string"

Motorcycle::Motorcycle(std::string& brand, std::string& model, int year, DriveType driveType)
    : Vehicle(brand, model, year), _driveType(driveType) {}

std::string Motorcycle::driveTypeToString(DriveType type) const {
    switch(type) {
        case DriveType::Belt: return "Belt";
        case DriveType::Chain: return "Chain";
        default: return "No data!";
    }
}

void Motorcycle::showInfo() const {
    std::cout << "MOTORCYCLE: { " << getBrand() << ", " << getModel()
        << ", " << getYear() << ", " << driveTypeToString(getDriveType()) << " }\n";
}

void Motorcycle::honk() const {
    std::cout << "*MOTORCYCLE HONK*\n";
}

double Motorcycle::calculateCostInsurance() const{
    double basePrice = 300.0;

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int currentYear = now->tm_year + 1900;

    int carAge = currentYear - getYear();

    return basePrice + (carAge * 25.0);
}