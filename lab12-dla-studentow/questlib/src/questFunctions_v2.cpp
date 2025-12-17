#include "questFunctions_v2.h"
#include <iostream>

namespace RPG {
namespace Tasks {

using RPG::Quests::Quest_v2;
using RPG::Rewards::Reward_v2;
using RPG::Rewards::GoldAmount_v2;
using RPG::Rewards::ExpAmount_v2;

static Reward_v2 noRewardYet()
{
    return Reward_v2(ExpAmount_v2(0));
}

Reward_v2 miningGold_v2(Quest_v2& q)
{
    q.performStep();

    if (!q.isCompleted()) {
        return noRewardYet();
    }

    int gold = q.getExecCounter() * 2;
    std::cout << "[MiningGold] quest completed, gold=" << gold << "\n";

    return Reward_v2(GoldAmount_v2(gold));
}

Reward_v2 collectSnow_v2(Quest_v2& q)
{
    q.performStep();

    if (!q.isCompleted()) {
        return noRewardYet();
    }

    int exp = q.getExecCounter() * 5;
    std::cout << "[CollectSnow] quest completed, exp=" << exp << "\n";

    return Reward_v2(ExpAmount_v2(exp), Item("Snowball", 1, 1));
}

Reward_v2 huntReindeer_v2(Quest_v2& q)
{
    q.performStep();

    if (!q.isCompleted()) {
        return noRewardYet();
    }

    int exp = q.getExecCounter() * 10;
    std::cout << "[HuntReindeer] quest completed, exp=" << exp << "\n";

    return Reward_v2(ExpAmount_v2(exp));
}

} // namespace Tasks
} // namespace RPG
