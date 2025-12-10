#ifndef QUEST_H
#define QUEST_H

#include <string>
#include <iostream>
#include "Colors.h"

class Quest {
private:
    std::string name;
    int duration;
    bool completed;
    mutable int executionCount;

public:
    Quest(const char* questName);
    explicit Quest(const std::string& questName, int duration = 5);

    void incrementExecutionCount() const;
    const std::string& getName() const;

    explicit operator std::string() const{ return name; };

    int getDuration() const { return duration; }
    bool isCompleted() const { return completed; }
};

#endif
