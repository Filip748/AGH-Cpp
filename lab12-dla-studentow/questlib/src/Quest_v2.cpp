#include "Quest_v2.h"

namespace RPG {
namespace Quests {

Quest_v2::Quest_v2(const char* n)
    : name(n),
      completed(false),
      currentIndex(0),
      execCounter(0)
{}

Quest_v2::Quest_v2(const std::string& n)
    : name(n),
      completed(false),
      currentIndex(0),
      execCounter(0)
{}

const std::string& Quest_v2::getName() const {
    return name;
}

void Quest_v2::addSubQuest(const SubQuest_v2& sq) {
    subquests.push_back(sq);
}

bool Quest_v2::hasSubQuests() const {
    return !subquests.empty();
}

int Quest_v2::subQuestCount() const {
    return static_cast<int>(subquests.size());
}

int Quest_v2::currentSubQuestIndex() const {
    return currentIndex;
}

bool Quest_v2::isCompleted() const {
    return completed;
}

void Quest_v2::performStep() {
    ++execCounter;

    if (completed || subquests.empty())
        return;

    if (currentIndex >= static_cast<int>(subquests.size())) {
        completed = true;
        return;
    }

    SubQuest_v2& current = subquests[currentIndex];
    current.performStep();

    if (current.isCompleted()) {
        ++currentIndex;
        if (currentIndex >= static_cast<int>(subquests.size())) {
            completed = true;
        }
    }
}

Quest_v2::operator std::string() const {
    return name;
}

int Quest_v2::getExecCounter() const {
    return execCounter;
}

} // namespace Quests
} // namespace RPG
