#include "Vehicle.hpp"
#include <iostream>

Vehicle::Vehicle(std::string& brand, std::string& model, int year)
    : _brand(brand), _model(model), _year(year) {}