#include "SantaArmy.h"
#include "ElfArmy.h"
#include "Colors.h"
#include <iostream>

SantaArmy::SantaArmy()
    : morale(0)
{
#ifdef DEBUG
    std::cout << YELLOW << "[DEBUG][SantaArmy] Domyślny\n" << RESET;
#endif
}
SantaArmy::SantaArmy(int count)
    : morale(0)
{
    summon(count);
}

SantaArmy::SantaArmy(int count, bool elite)
    : morale(0)
{
    if (elite)
        summonElite(count);
    else
        summon(count);
}

SantaArmy::SantaArmy(const SantaArmy& other)
    : units(other.units), morale(other.morale)
{
}

SantaArmy::~SantaArmy() {
    std::cout << RED << "[DEBUG] SantaArmy destroyed (size = "
              << units.size() << ")" << RESET << std::endl;
}

void SantaArmy::summon(int count) {
    morale = 100;

    for (int i = 0; i < count; i++) {
        SantaClauss santa("Santa", 100, 10);
        units.push_back(santa);
    }
}

void SantaArmy::summonElite(int count) {
    morale = 120;

    for (int i = 0; i < count; i++) {
        SantaClauss santa("Elite Santa", 150, 20);
        units.push_back(santa);
    }
}

void SantaArmy::show() const {
    std::cout << CYAN << "===== SANTA ARMY =====\n" << RESET;

    std::cout << GREEN << "Morale: " << morale << RESET << "\n";
    std::cout << "Units: " << units.size() << "\n";

    for (size_t i = 0; i < units.size(); i++) {
        std::cout << "[" << i << "] ";
        units[i].showStats();
    }

    std::cout << CYAN << "=======================\n" << RESET;
}

bool SantaArmy::hasUnits() const {
    return !units.empty();
}

int SantaArmy::size() const {
    return units.size();
}

SantaClauss& SantaArmy::getUnit(int index) {
    return units.at(index);
}

void SantaArmy::removeUnit(int index) {
    if (index < 0 || index >= static_cast<int>(units.size()))
        return; 
    units[index].takeDamage(units[index].getHp()); 
}

