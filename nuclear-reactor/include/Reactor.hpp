#pragma once

#include <iostream>
#include <string>

class Reactor {
private:
    std::string m_name;
    double m_temperature;
    double m_pressure;

    static int m_active_count;
public:
    Reactor(std::string name, double temp, double pressure)
        : m_name(name), m_temperature(temp), m_pressure(pressure) { m_active_count++; }
    
    ~Reactor() { std::cout << "[SHUTDOWN SEQUENCE] Reactor " << m_name << " is being destroyed.\n"; m_active_count--; }

    void print_public_status() const;

    static int get_active_count();

    friend class SafetySystem;

    friend void emergency_cool_down(Reactor& r);

};