#include "Knight.h"
#include <iostream>

Knight::Knight(std::string name)
    : Warrior(name), honor(50) {}

Knight::~Knight() {
    std::cout << "Knight destroyed\n";
}

void Knight::train() {
    honor += 10;
    std::cout << "Knight trained\n";
}

bool Knight::operator>(const Knight& other) const {
    return this->honor > other.honor;
}