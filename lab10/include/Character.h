#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Inventory.h"
//#include "SantaClauss.h"
//#include "Elf.h"

class Character {
private:
    std::string name;
    int hp;
    Inventory inventory;

public:
    Character();
    Character(const std::string& n, int health);
    ~Character();

    void showStats() const;
    Inventory& getInventory();

    int getHp() const;
    void takeDamage(int dmg);
    bool isAlive() const;

    friend class SantaClauss;
    friend class Elf;
};

#endif
