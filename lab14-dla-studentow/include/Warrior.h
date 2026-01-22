#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"

/**
 * @brief Klasa Wojownika, dziedziczy po Character.
 */
class Warrior : public Character {
protected:
    int armor;

public:
    /**
     * @brief Konstruktor Wojownika.
     * @param name Imie.
     */
    Warrior(std::string name);

    /**
     * @brief Destruktor.
     */
    ~Warrior();

    /**
     * @brief Metoda obrony.
     * @param armorBoost Wartość o którą zwiększamy pancerz tymczasowo lub na stałe.
     */
    void defend(int armorBoost);

    /**
     * @brief Przeciążony operator + zwiększający pancerz.
     */
    Warrior& operator+(int value);
};

#endif