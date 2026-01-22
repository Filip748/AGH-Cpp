#include "Entity.h"

Entity::Entity(int hp, int level)
    : hp(hp), level(level) {}

Entity::~Entity() {
    std::cout << "Entity destroyed\n";
}

int Entity::getHP() const {
    return hp;
}

void Entity::takeDamage(int dmg) {
    hp -= dmg;
    if (hp < 0) hp = 0;
}

bool Entity::operator==(const Entity& other) const {
    return level == other.level;
}

Entity& Entity::operator+=(int value) {
    hp += value;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Entity& e) {
    os << "HP: " << e.hp << ", Level: " << e.level;
    return os;
}

