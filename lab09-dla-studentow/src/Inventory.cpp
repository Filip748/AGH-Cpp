#include "../include/Inventory.h"
#include <iostream>

Inventory::Inventory() {
#ifdef DEBUG
    std::cout << "[DEBUG][Inventory] Konstruktor\n";
#endif
}

Inventory::~Inventory() {
#ifdef DEBUG
    std::cout << "[DEBUG][Inventory] Destruktor\n";
#endif
}

void Inventory::add(const Item& item) {
    m_items.push_back(item);
#ifdef DEBUG
    std::cout << "[DEBUG][Inventory] Dodano: " << item.m_name << "\n";
#endif
}
void Inventory::show() const {
    std::cout << "\n--- Ekwipunek ---\n";

    for(const auto& i : m_items) {
        std::cout << i.m_name
                  << " (DMG: " << i.m_damage 
                  << ", Wartość: " << i.m_value << ")\n";
    }
}