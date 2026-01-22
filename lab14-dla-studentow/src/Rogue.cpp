#include "Rogue.h"
#include "Logger.h"
#include <iostream>

// Rogue musi inicjalizować Character (dziedziczenie prywatne).
// Parametry dobrane tak, by pasowały do outputu w main: HP 90, Str 25, Agility 30
Rogue::Rogue(std::string name)
    : Character(name, 25, 90, 1), agility(30) {}

void Rogue::sneakAttack(Entity& target) {
    LOG_INFO("Sneak attack!");
    // Atak z zaskoczenia może zadawać dodatkowe obrażenia
    target.takeDamage(strength + agility); 
}

void Rogue::showStats() const {
    // Format wyjścia zgodny z "Run 2"
    // Rogue HP: 90, Strength: 25, Agility: 30
    std::cout << "Rogue HP: " << hp 
              << ", Strength: " << strength 
              << ", Agility: " << agility << std::endl;
}