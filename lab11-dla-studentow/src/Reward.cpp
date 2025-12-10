#include "Reward.h"

Reward::Reward(int gold)
    : type(RewardType::Gold), goldValue(gold), itemReward(), companionReward() {}

Reward::Reward(const Item& item)
    : type(RewardType::Item), goldValue(0), itemReward(item), companionReward() {}

// Reward::Reward(const SantaClauss& companion)
//     : type(RewardType::Item), goldValue(0), itemReward(), companionReward(companion) {}
Reward::Reward(const SantaClauss& companion)
    : type(RewardType::Companion),
      goldValue(0),
      itemReward(),
      companionReward(companion) {}


RewardType Reward::getType() const {
    return type;
}


Reward::operator int() const {
    return (type == RewardType::Gold) ? goldValue : 0;
}

Reward::operator Item() const {
    return (type == RewardType::Item) ? itemReward : Item();
}

Reward::operator SantaClauss() const {
    return (type == RewardType::Companion) ? companionReward : SantaClauss();
}
