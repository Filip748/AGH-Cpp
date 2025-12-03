#ifndef ELF_H
#define ELF_H

#include "Character.h"
#include "Item.h"
#include <string>

enum class ElfClassType {
    Warrior,
    Mage,
    Archer
};

class Elf {
private:
    Character character;
    ElfClassType type;
    int baseDamage;

public:

    Elf();

    Elf(const std::string& name, int hp, ElfClassType type);

    Elf(const Elf& other);

    explicit Elf(ElfClassType type);

    static Elf createWarrior(const std::string& name = "Warrior Elf");
    static Elf createMage(const std::string& name = "Mage Elf");
    static Elf createArcher(const std::string& name = "Archer Elf");


    ~Elf();

    void showStats() const;
    Inventory& getInventory();

    int getHp() const;
    void takeDamage(int dmg);
    bool isAlive() const;

    int getBaseDamage() const;
};

#endif
