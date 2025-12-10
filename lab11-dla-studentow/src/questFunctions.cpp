#include "questFunctions.h"
#include <iostream>
#include "Item.h"
#include "SantaClauss.h"

Reward miningGold(const Quest& quest) {
    quest.incrementExecutionCount();
    std::cout << "Mining gold for quest: " << quest.getName() << '\n';
    return Reward(50);
}

Reward collectSnow(const Quest& quest) {
    quest.incrementExecutionCount();
    std::cout << "Collecting snow for quest: " << quest.getName() << "\n";
    Item snow("Snow Pouch", 1, 1);
    return Reward(snow);
}

Reward huntReindeer(const Quest& quest) {
    quest.incrementExecutionCount();
    std::cout << "Hunting reindeer for quest: " << quest.getName() << "\n";
    SantaClauss guardian("Reindeer Guardian", 150, 5);
    return Reward(guardian);
}