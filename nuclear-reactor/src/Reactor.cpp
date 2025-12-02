#include "../include/Reactor.hpp"

int Reactor::m_active_count = 0;

void Reactor::print_public_status() const {
    std::cout << "Reactor " << m_name << "is online.\n";
}

void emergency_cool_down(Reactor& r) {
    r.m_temperature = 0.0;
    std::cout << "!!! EMERGENCY OVERRIDE !!! Temperature reset to 0." << std::endl;
}

int Reactor::get_active_count() {
    return m_active_count;
}