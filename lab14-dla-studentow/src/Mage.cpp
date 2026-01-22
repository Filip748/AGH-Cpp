#include "Mage.h"
#include <iostream>

// Mag ma mniej siły fizycznej (5), domyślne HP (100) lub mniej, tu zostawiamy domyślne dla Entity
Mage::Mage(std::string name)
    : Character(name, 5, 100, 1), mana(100) {}

Mage::~Mage() {
    std::cout << "Mage destroyed\n";
}

void Mage::castSpell(Entity& target) {
    // Zakładamy, że czar zadaje 10 obrażeń (by pasowało do wyniku 90 HP w main)
    int damage = 10;
    target.takeDamage(damage);
    mana -= 10;
}