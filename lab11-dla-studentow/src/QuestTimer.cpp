#include "QuestTimer.h"

QuestTimer::QuestTimer(int dur)
    : duration(dur), count(0) {}

void QuestTimer::tick() {
    if (count < duration) {
        count++;
    }
}

QuestTimer::operator bool() const {
    return count < duration;
}