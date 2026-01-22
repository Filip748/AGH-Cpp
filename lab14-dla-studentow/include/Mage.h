#ifndef MAGE_H
#define MAGE_H

#include "Character.h"

/**
 * @brief Klasa Maga, dziedziczy po Character.
 */
class Mage : public Character {
private:
    int mana;

public:
    /**
     * @brief Konstruktor Maga.
     * @param name Imie.
     */
    Mage(std::string name);

    /**
     * @brief Destruktor.
     */
    ~Mage();

    /**
     * @brief Rzuca czar na cel.
     * @param target Cel ataku (Entity).
     */
    void castSpell(Entity& target);
};

#endif