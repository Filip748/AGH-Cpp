#ifndef ACTION_H
#define ACTION_H

#include <string>
#include <iostream>
#include <functional>
#include "Hero.h"

namespace RPG {
namespace Actions {

class Action {
public:
    // Enum for Action Types
    enum Type {
        Attack = 0,
        Heal = 1,
        Rest = 2
    };

private:
    std::string name;
    Type type;
    int power;
    mutable int calls; // Mutable to allow modification in const methods/functor calls

    Hero* source;
    Hero* target; // Can be nullptr for self-actions

public:
    // Constructor for Attack (requires target)
    Action(const std::string& name, Hero& source, Hero& target, int power);

    // Constructor for Solo Actions (Heal, Rest) - explicit target not needed
    Action(const std::string& name, Type type, Hero& source, int power);

    // Copy Constructor
    Action(const Action& other);

    // Destructor
    ~Action();

    // Functor operator: executes the action logic
    void operator()() const;

    // Prefix increment (++action)
    Action& operator++();
    // Postfix increment (action++)
    Action operator++(int);

    // Prefix decrement (--action)
    Action& operator--();
    // Postfix decrement (action--)
    Action operator--(int);

    // Conversion to int (returns power)
    explicit operator int() const;

    // Implicit conversion to std::function<void()>
    operator std::function<void()>() const;

    // IO Operators
    friend std::ostream& operator<<(std::ostream& os, const Action& action);
    friend std::istream& operator>>(std::istream& is, Action& action);
};

} // namespace Actions
} // namespace RPG

#endif