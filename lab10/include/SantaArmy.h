#ifndef SANTAARMY_H
#define SANTAARMY_H

#include <vector>
#include "SantaClauss.h"
class ElfArmy;

class SantaArmy {
private:
    std::vector<SantaClauss> units;
    int morale;

public:
 
    SantaArmy();

    explicit SantaArmy(int count);

    SantaArmy(int count, bool elite);

    SantaArmy(const SantaArmy& other);

    ~SantaArmy();

    void summon(int count);

    void summonElite(int count);

    void show() const;

    bool hasUnits() const;
    int size() const;

    SantaClauss& getUnit(int index);
    void removeUnit(int index);

    friend class ElfArmy;
    friend void battleArmies(SantaArmy& santaArmy, ElfArmy& elfArmy);
};

#endif
