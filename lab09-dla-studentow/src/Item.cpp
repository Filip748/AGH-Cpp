#include "../include/Item.h"
#include <iostream>

Item::Item() {}

Item::Item(std::string name, int dmg, int value) 
    : m_name(name), m_damage(dmg), m_value(value) {}
    
Item::~Item() {
#ifdef DEBUG
    std::cout << "[DEBUG][Item] Destruktor: " << m_name << std::endl;
#endif
}