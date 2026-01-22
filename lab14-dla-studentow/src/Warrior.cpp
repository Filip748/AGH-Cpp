#include "Warrior.h"
#include <iostream>

// Warrior domyślnie ma więcej siły (np. 20) i 100 HP
Warrior::Warrior(std::string name)
    : Character(name, 20, 100, 1), armor(10) {}

Warrior::~Warrior() {
    std::cout << "Warrior destroyed\n";
}

void Warrior::defend(int armorBoost) {
    // W tej prostej logice tylko zwiększamy pancerz
    armor += armorBoost;
}

Warrior& Warrior::operator+(int value) {
    this->armor += value;
    return *this;
}