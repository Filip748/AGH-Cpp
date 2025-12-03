#include "SantaClauss.h"
//#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>

//domyslny
SantaClauss::SantaClauss() 
    : santa("Santa", 100), baseDamage(10) {}

//parametryczny
SantaClauss::SantaClauss(const std::string& name, int hp, int dmg)
    : santa(name, hp), baseDamage(dmg) {}

//kopiujacy
SantaClauss::SantaClauss(const SantaClauss& other)
    : santa(other.santa), baseDamage(other.baseDamage) {}

//delegujacy
SantaClauss::SantaClauss(int difficultyLevel) 
    : santa("Santa", 100 + difficultyLevel * 10),
    baseDamage(10 + difficultyLevel * 2) {}

//wyposazajacy
SantaClauss::SantaClauss(bool withEquipment, int hp)
    : santa("Santa", hp), baseDamage(10) {

    if(withEquipment) {
        santa.getInventory().add(Item("Ruzga", 10, 10));
    }
}

SantaClauss::~SantaClauss() {}

void SantaClauss::showStats() const
{
    std::cout << "=== SantaClauss stats ===\n";
    // Jeśli Character ma getName/getHp:
    std::cout << "Name: " << santa.name << '\n';
    std::cout << "HP:   " << santa.hp << '\n';
    std::cout << "Base damage: " << baseDamage << '\n';
    std::cout << "Inventory: (use getInventory() to access contents)\n";
    std::cout << "=========================\n";
}

Inventory& SantaClauss::getInventory()
{
    return santa.getInventory();
}

int SantaClauss::getHp() const
{
    return santa.getHp();
}

void SantaClauss::takeDamage(int dmg)
{
    int cur = santa.getHp();
    int next = std::max(0, cur - dmg);
    santa.hp = next;
}

bool SantaClauss::isAlive() const
{
    return santa.isAlive();
}

int SantaClauss::getBaseDamage() const
{
    return baseDamage;
}