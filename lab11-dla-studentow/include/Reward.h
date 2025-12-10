#ifndef REWARD_H
#define REWARD_H

#include "RewardType.h"
#include "Item.h"
#include "SantaClauss.h"
#include <stdexcept>

class Reward {
private:
    RewardType type;
    int goldValue;
    Item itemReward;
    SantaClauss companionReward;

public:
    // konstruktory
    explicit Reward(int gold);
    explicit Reward(const Item& item);
    explicit Reward(const SantaClauss& companion);

    RewardType getType() const;

    explicit operator int() const;
    explicit operator Item() const;
    explicit operator SantaClauss() const;

};

#endif
