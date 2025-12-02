#include <iostream>
#include "../include/SafetySystem.hpp"
#include "../include/Reactor.hpp"

void SafetySystem::check_reactor(const Reactor& r) const {
    std::cout << "System check: " << r.m_name
              << " Temp: " << r.m_temperature
              << " Pressure: " << r.m_pressure << std::endl;
}