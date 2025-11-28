#pragma once
#include <string>
#include <iostream>

class Transmission {
private:
    std::string type;
    int currentGear;   // -1 R, 0 N, 1–6

    friend class Car;

public:
    explicit Transmission(const std::string& t);
    ~Transmission();

    friend std::ostream& operator<<(std::ostream& os, const Transmission& tr);
};