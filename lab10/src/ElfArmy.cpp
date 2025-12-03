#include "ElfArmy.h"
#include "SantaArmy.h"
#include "Colors.h"
#include <iostream>


ElfArmy::ElfArmy()
    : morale(0) {}

ElfArmy::ElfArmy(int count, ElfClassType type)
    : morale(0)
{
    for (int i = 0; i < count; i++) {
        units.emplace_back("Elf", 100, type);
    }
}

ElfArmy::ElfArmy(const std::vector<std::string>& names, ElfClassType type)
    : morale(0)
{
    for (const auto& n : names) {
        units.emplace_back(n, 100, type);
    }
}


ElfArmy::ElfArmy(const ElfArmy& other)
    : units(other.units), morale(other.morale)
{
}

ElfArmy::~ElfArmy() {
    std::cout << YELLOW << "[DEBUG] ElfArmy destroyed (size = "
              << units.size() << ")" << RESET << std::endl;
}



void ElfArmy::summonRandom(int count)
{
    for (int i = 0; i < count; ++i)
        units.emplace_back(ElfClassType::Archer);

    morale = 100;

    std::cout << CYAN << "Przywołano " << count 
              << " losowych Elfów!" << RESET << "\n";
}

void ElfArmy::show() const
{
    std::cout << CYAN << "\nArmia Elfów: " 
              << units.size() 
              << " jednostek, morale: " << morale 
              << RESET << "\n";
}

bool ElfArmy::hasUnits() const {
    return !units.empty();
}

int ElfArmy::size() const {
    return units.size();
}

Elf& ElfArmy::getUnit(int index) {
    return units.at(index);
}

void ElfArmy::removeUnit(int index) {
    if (index < 0 || index >= static_cast<int>(units.size()))
        return; 
    units[index].takeDamage(units[index].getHp()); 
}
