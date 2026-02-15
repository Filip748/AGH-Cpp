#ifndef MOTORCYCLE_HPP
#define MOTORCYCLE_HPP 

#include "Vehicle.hpp"
#include <iostream>

enum class DriveType {
    Chain,
    Belt
};

class Motorcycle : public Vehicle {
private:
    DriveType _driveType;
public:
    Motorcycle(std::string& brand, std::string& model, int year, DriveType driveType);

    std::string driveTypeToString(DriveType type) const;

    DriveType getDriveType() const { return _driveType; }

    void showInfo() const override;
    void honk() const override;
    double calculateCostInsurance() const override;

};

#endif