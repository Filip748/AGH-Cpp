#ifndef QUESTFUNCTIONS_H
#define QUESTFUNCTIONS_H

#include "Quest.h"
#include "Reward.h"

//nagroda w postaci zlota
Reward miningGold(const Quest& quest);

// nagroda w postaci Item
Reward collectSnow(const Quest& quest);

// nagroda w postaci towarzysza
Reward huntReindeer(const Quest& quest);

#endif
