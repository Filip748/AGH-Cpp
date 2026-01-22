#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

/**
 * @brief Klasa Rycerza, dziedziczy po Wojowniku.
 */
class Knight : public Warrior {
private:
    int honor;

public:
    /**
     * @brief Konstruktor Rycerza.
     * @param name Imie.
     */
    Knight(std::string name);

    /**
     * @brief Destruktor.
     */
    ~Knight();

    /**
     * @brief Metoda treningu.
     */
    void train();

    /**
     * @brief Operator porównania honoru.
     */
    bool operator>(const Knight& other) const;
};

#endif