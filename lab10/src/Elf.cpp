#include "Elf.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
//#include "Character.h"

static int classBaseDamage(ElfClassType type) {
    switch (type) {
        case ElfClassType::Warrior: return 15;
        case ElfClassType::Mage:    return 10;
        case ElfClassType::Archer:  return 12;
    }
    return 10;
}

// Konstruktor domyślny
Elf::Elf()
    : character("Elf", 100), type(ElfClassType::Warrior),
      baseDamage(classBaseDamage(type))
{
}

// Konstruktor parametryczny
Elf::Elf(const std::string& name, int hp, ElfClassType t)
    : character(name, hp), type(t),
      baseDamage(classBaseDamage(t))
{
}

// Konstruktor kopiujący
Elf::Elf(const Elf& other)
    : character(other.character),
      type(other.type),
      baseDamage(other.baseDamage)
{
}

// Konstruktor losowy z typem
Elf::Elf(ElfClassType t)
    : character("Elf", 80 + classBaseDamage(t) * 2),
      type(t),
      baseDamage(classBaseDamage(t))
{
}

Elf Elf::createWarrior(const std::string& name) {
    return Elf(name, 120, ElfClassType::Warrior);
}

Elf Elf::createMage(const std::string& name) {
    return Elf(name, 90, ElfClassType::Mage);
}

Elf Elf::createArcher(const std::string& name) {
    return Elf(name, 100, ElfClassType::Archer);
}


// Destruktor z komunikatem debug
Elf::~Elf() {
    std::cout << "[DEBUG] Elf destroyed: "
              << character.name
              << " (" << static_cast<int>(type) << ")"
              << std::endl;
}

void Elf::showStats() const {
    std::cout << "=== Elf Stats ===\n";
    std::cout << "Name: " << character.name << "\n";
    std::cout << "HP:   " << character.getHp() << "\n";
    std::cout << "Type: ";
    switch (type) {
        case ElfClassType::Warrior: std::cout << "Warrior"; break;
        case ElfClassType::Mage:    std::cout << "Mage"; break;
        case ElfClassType::Archer:  std::cout << "Archer"; break;
    }
    std::cout << "\nBase damage: " << baseDamage << "\n";
    std::cout << "=================\n";
}

Inventory& Elf::getInventory() {
    return character.getInventory();
}

int Elf::getHp() const {
    return character.getHp();
}

void Elf::takeDamage(int dmg) {
    int cur = character.getHp();
    int next = std::max(0, cur - dmg);
    character.hp = next;
}

bool Elf::isAlive() const {
    return character.isAlive();
}

int Elf::getBaseDamage() const {
    return baseDamage;
}
