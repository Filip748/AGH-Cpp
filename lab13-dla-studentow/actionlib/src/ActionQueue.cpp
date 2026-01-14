#include "ActionQueue.h"
#include <iostream>

namespace RPG {
namespace Actions {

ActionQueue::ActionQueue() {
#ifdef DEBUG
    std::cout << "[DEBUG] ActionQueue ctor\n";
#endif
}

ActionQueue::~ActionQueue() {
#ifdef DEBUG
    std::cout << "[DEBUG] ActionQueue dtor\n";
#endif
}

void ActionQueue::push(std::function<void()> action) {
    queue.push_back(action);
}

void ActionQueue::operator()() {
    for (const auto& action : queue) {
        if (action) {
            action();
        }
    }
    queue.clear(); 
}

size_t ActionQueue::size() const {
    return queue.size();
}

} // namespace Actions
} // namespace RPG