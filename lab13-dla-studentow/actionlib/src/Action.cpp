#include "Action.h"
#include <iostream>

namespace RPG {
namespace Actions {

// --- Constructors ---

Action::Action(const std::string& name, Hero& source, Hero& target, int power)
    : name(name), type(Attack), power(power), calls(0), source(&source), target(&target)
{
#ifdef DEBUG
    std::cout << "[DEBUG] Action ctor (Attack): " << name << "\n";
#endif
}

Action::Action(const std::string& name, Type type, Hero& source, int power)
    : name(name), type(type), power(power), calls(0), source(&source), target(nullptr)
{
#ifdef DEBUG
    std::cout << "[DEBUG] Action ctor (Solo): " << name << "\n";
#endif
}

Action::Action(const Action& other)
    : name(other.name), type(other.type), power(other.power), calls(other.calls),
      source(other.source), target(other.target)
{
#ifdef DEBUG
    std::cout << "[DEBUG] Action copy ctor: " << name << "\n";
#endif
}

Action::~Action() {
#ifdef DEBUG
    std::cout << "[DEBUG] ~Action(): " << name << "\n";
#endif
}

// --- Functor Operator ---

void Action::operator()() const {
    calls++; // Mutable

    // Logic based on Game.cpp output analysis
    // Attack: Costs Energy (power), Damages Target (power)
    // Heal: Costs Energy (power), Heals Source (power)
    // Rest: Restores Energy (power)

    if (type == Attack && source && target) {
        if (source->isAlive()) {
            source->changeEnergy(-power);
            target->changeHp(-power);
            std::cout << "[Action] " << source->getName() << " uses '" << name 
                      << "' on " << target->getName() << " dmg=" << power 
                      << " (calls=" << calls << ")\n";
        }
    } else if (type == Heal && source) {
        if (source->isAlive()) {
            source->changeEnergy(-power);
            source->changeHp(power);
            std::cout << "[Action] " << source->getName() << " uses '" << name 
                      << "' heal=" << power << " (calls=" << calls << ")\n";
        }
    } else if (type == Rest && source) {
        if (source->isAlive()) {
            source->changeEnergy(power);
            std::cout << "[Action] " << source->getName() << " uses '" << name 
                      << "' rest=" << power << " (calls=" << calls << ")\n";
        }
    }
}

// --- Arithmetic Operators ---

Action& Action::operator++() { // Pre-inc
    ++power;
    return *this;
}

Action Action::operator++(int) { // Post-inc
    Action temp = *this;
    ++power;
    return temp;
}

Action& Action::operator--() { // Pre-dec
    --power;
    return *this;
}

Action Action::operator--(int) { // Post-dec
    Action temp = *this;
    --power;
    return temp;
}

// --- Conversions ---

Action::operator int() const {
    return power;
}

Action::operator std::function<void()>() const {
    // Return a lambda that captures a copy of this object.
    // This allows the std::function to own the Action logic.
    return [copy = *this]() mutable {
        copy();
    };
}

// --- IO Operators ---

std::ostream& operator<<(std::ostream& os, const Action& action) {
    os << "Action{name='" << action.name << "', type=" << static_cast<int>(action.type)
       << ", power=" << action.power << ", calls=" << action.calls 
       << ", hasTarget=" << (action.target != nullptr ? 1 : 0) << "}";
    return os;
}

std::istream& operator>>(std::istream& is, Action& action) {
    // Format expected: "15 Thunder" (Power Name)
    int p;
    std::string n;
    if (is >> p >> n) {
        action.power = p;
        action.name = n;
    }
    return is;
}

} // namespace Actions
} // namespace RPG