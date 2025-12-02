#pragma once

#include <iostream>

class Reactor;

class SafetySystem {
public:
    void check_reactor(const Reactor& r) const;
};