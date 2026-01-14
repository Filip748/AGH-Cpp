#include "Hero.h"

namespace RPG {
namespace Actions {

Hero::Hero()
    : name("Unnamed"), hp(100), energy(50)
{}

Hero::Hero(const std::string& n, int h, int e)
    : name(n), hp(h), energy(e)
{}

Hero::Hero(const Hero& other)
    : name(other.name), hp(other.hp), energy(other.energy)
{}

Hero::~Hero()
{
#ifdef DEBUG
    std::cout << "[DEBUG] ~Hero(): " << name << "\n";
#endif
}

const std::string& Hero::getName() const { return name; }

int Hero::getHp() const { return hp; }
int Hero::getEnergy() const { return energy; }

void Hero::changeHp(int delta)
{
    hp += delta;
    if (hp < 0) hp = 0;
}

void Hero::changeEnergy(int delta)
{
    energy += delta;
    if (energy < 0) energy = 0;
}

bool Hero::isAlive() const { return hp > 0; }

void Hero::show() const
{
    std::cout << "Hero[" << name << "] HP=" << hp
              << " Energy=" << energy
              << " Alive=" << (isAlive() ? "yes" : "no") << "\n";
}

} // namespace Actions
} // namespace RPG

