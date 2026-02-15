#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>

class Vehicle {
private:
    std::string _brand;
    std::string _model;
    int _year;
public:
    Vehicle(std::string& brand, std::string& model, int year);
    virtual ~Vehicle() = default;

    std::string getBrand() const { return _brand; }
    std::string getModel() const { return _model; }
    int getYear() const { return _year; }
    
    virtual void showInfo() const = 0;
    virtual void honk() const = 0;
    virtual double calculateCostInsurance() const = 0;
};

#endif