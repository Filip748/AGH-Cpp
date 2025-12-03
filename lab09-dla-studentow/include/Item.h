#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string m_name;
    int m_damage;
    int m_value;
public:
    Item();
    Item(std::string name, int dmg, int value);
    ~Item();

    friend class Inventory;
};

#endif