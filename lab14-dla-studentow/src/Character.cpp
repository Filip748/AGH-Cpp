#include "Character.h"
#include <iostream>

Character::Character(std::string name, int strength, int hp, int level)
    : Entity(hp, level), name(name), strength(strength) {}

Character::~Character() {
    std::cout << "Character destroyed\n";
}

void Character::attack() const {
    std::cout << name << " attacks with strength " << strength << "!\n";
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        this->hp = other.hp;
        this->level = other.level;
        this->name = other.name;
        this->strength = other.strength;
    }
    return *this;
}