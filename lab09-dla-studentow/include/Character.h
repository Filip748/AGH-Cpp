#ifndef CHARACTER_H
#define CHARACTER_H

#include "Inventory.h"
#include <string>

class Character {
private:
    std::string m_name;
    int m_hp;
    Inventory m_inventory;

public:
    Character();
    Character(std::string name, int hp);
    ~Character();

    void showStats() const;
    Inventory& getInventory();
};

#endif