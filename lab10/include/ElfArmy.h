#ifndef ELFARMY_H
#define ELFARMY_H

#include <vector>
#include <string>
#include "Elf.h"
class SantaArmy;

class ElfArmy {
private:
    std::vector<Elf> units;
    int morale;

public:
    // Konstruktor domyślny (morale = 0)
    ElfArmy();

    // Konstruktor parametryczny (count + type)
    ElfArmy(int count, ElfClassType type);

    // Konstruktor z listą imion
    ElfArmy(const std::vector<std::string>& names, ElfClassType type);

    // Konstruktor kopiujący
    ElfArmy(const ElfArmy& other);

    // Destruktor z debug
    ~ElfArmy();

    // Metody
    void summonRandom(int count);

    void show() const;

    bool hasUnits() const;
    int size() const;

    Elf& getUnit(int index);

    void removeUnit(int index);

    // Przyjaźń
    friend void battleArmies(SantaArmy& santaArmy, ElfArmy& elfArmy);
};

#endif
