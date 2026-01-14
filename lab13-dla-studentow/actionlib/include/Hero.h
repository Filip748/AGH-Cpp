#ifndef HERO_H
#define HERO_H

#include <string>
#include <iostream>

namespace RPG {
namespace Actions {

class Hero {
private:
    std::string name;
    int hp;
    int energy;

public:
    Hero();
    Hero(const std::string& n, int h, int e);
    Hero(const Hero& other);
    ~Hero();

    const std::string& getName() const;

    int getHp() const;
    int getEnergy() const;

    void changeHp(int delta);
    void changeEnergy(int delta);

    bool isAlive() const;

    void show() const;
};

} // namespace Actions
} // namespace RPG

#endif

