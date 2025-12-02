#include <iostream>
#include "Reactor.hpp"
#include "SafetySystem.hpp"

// Deklaracja funkcji globalnej (zazwyczaj byłaby w nagłówku Utils.h, ale uprośćmy)
void emergency_cool_down(Reactor& r);

int main() {
    std::cout << "--- Nuclear Power Plant Simulation ---" << std::endl;

    // 1. Tworzymy reaktor z wysoką temperaturą!
    Reactor core1("RBMK-1000", 2500.5, 120.0);

    // 2. Publiczny status jest skąpy (nie widzimy temperatury)
    core1.print_public_status();

    // 3. System bezpieczeństwa (Friend Class) sprawdza parametry
    SafetySystem monitor;
    std::cout << "\n[AUDIT STARTING]..." << std::endl;
    monitor.check_reactor(core1); // To ma zadziałać dzięki 'friend class'

    // 4. Awaria! Używamy globalnej funkcji (Friend Function)
    std::cout << "\n[ALARM] Critical temperature! Initiating manual override..." << std::endl;
    emergency_cool_down(core1); // To ma zadziałać dzięki 'friend function'

    // 5. Sprawdzenie po schłodzeniu
    std::cout << "\n[AUDIT AFTER FIX]..." << std::endl;
    monitor.check_reactor(core1);

    return 0;
}

// --- Nuclear Power Plant Simulation ---
// Reactor RBMK-1000 is online.

// [AUDIT STARTING]...
// System check: RBMK-1000 Temp: 2500.5 Pressure: 120

// [ALARM] Critical temperature! Initiating manual override...
// !!! EMERGENCY OVERRIDE !!! Temperature reset to 0.

// [AUDIT AFTER FIX]...
// System check: RBMK-1000 Temp: 0 Pressure: 120