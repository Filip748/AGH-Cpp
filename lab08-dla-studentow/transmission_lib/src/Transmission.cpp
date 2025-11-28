#include "Transmission.h"
#include <iostream>

Transmission::Transmission(const std::string& t)
    : type(t), currentGear(0)
{
    std::cout << "[Transmission] Created: " << type << "\n";
}

Transmission::~Transmission() {
    std::cout << "[Transmission] Destroyed: " << type << "\n";
}

std::ostream& operator<<(std::ostream& os, const Transmission& tr) {
    os << "Transmission: " << tr.type
       << " | Gear: "
       << (tr.currentGear == 0 ? "N" : std::to_string(tr.currentGear));
    return os;
}
