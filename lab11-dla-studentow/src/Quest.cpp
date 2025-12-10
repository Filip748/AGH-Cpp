#include "Quest.h"

Quest::Quest(const char* questName)
    : name(questName), duration(5), completed(false), executionCount(0) {}

Quest::Quest(const std::string& questName, int duration)
    : name(questName), duration(duration), completed(false), executionCount(0) {}

void Quest::incrementExecutionCount() const {
    executionCount++;
}

const std::string& Quest::getName() const {
    return name;
}