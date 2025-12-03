#include "../include/Character.h"
#include <iostream>
Character::Character() 
    : m_name("Rycerz"), m_hp(100) {}

Character::Character(std::string name, int hp)
    : m_name(name), m_hp(hp) {}

Character::~Character() {
#ifdef DEBUG
    std::cout << "[DEBUG][Character] Destruktor: " << m_name << std::endl;
#endif
}

void Character::showStats() const {
    std::cout << "Imie: " << m_name << std::endl 
              << "HP: " << m_hp << std::endl;
}


Inventory& Character::getInventory() {
    return m_inventory;
}