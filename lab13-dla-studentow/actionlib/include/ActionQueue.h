#ifndef ACTIONQUEUE_H
#define ACTIONQUEUE_H

#include <vector>
#include <functional>
#include "Action.h"

namespace RPG {
namespace Actions {

class ActionQueue {
private:
    std::vector<std::function<void()>> queue;

public:
    ActionQueue();
    ~ActionQueue();

    // Adds a task to the queue. 
    // Supports Action objects, Lambdas, and std::ref(Action)
    void push(std::function<void()> action);

    // Executes all actions in the queue
    void operator()();

    // Returns current number of actions
    size_t size() const;
};

} // namespace Actions
} // namespace RPG

#endif