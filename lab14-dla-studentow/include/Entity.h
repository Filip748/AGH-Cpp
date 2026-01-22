#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

class Entity {
protected:
    int hp;
    int level;

public:
    Entity(int hp = 100, int level = 1);
    ~Entity();

    int getHP() const;
    void takeDamage(int dmg);

    bool operator==(const Entity& other) const;
    Entity& operator+=(int value);

    friend std::ostream& operator<<(std::ostream& os, const Entity& e);
};

#endif

