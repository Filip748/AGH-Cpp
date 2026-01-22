#ifndef CHARACTER_H
#define CHARACTER_H

#include "Entity.h"
#include <string>

/**
 * @brief Klasa reprezentująca postać, dziedziczy po Entity.
 */
class Character : public Entity {
protected:
    std::string name;
    int strength;

public:
    /**
     * @brief Konstruktor Character.
     * @param name Imie postaci.
     * @param strength Siła postaci.
     * @param hp Punkty życia.
     * @param level Poziom postaci.
     */
    Character(std::string name, int strength, int hp = 100, int level = 1);
    
    /**
     * @brief Destruktor.
     */
    ~Character();

    /**
     * @brief Metoda ataku.
     */
    void attack() const;

    /**
     * @brief Operator przypisania.
     */
    Character& operator=(const Character& other);
};

#endif