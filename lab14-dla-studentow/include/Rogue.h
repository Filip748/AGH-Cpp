#ifndef ROGUE_H
#define ROGUE_H

#include "Character.h"

class Rogue : private Character {
private:
    int agility;

public:
    Rogue(std::string name);

    void sneakAttack(Entity& target);
    void showStats() const;
};

#endif

