// 28.11.2025
// CWL 3 
// Laboratorium Język C++ - Zajęcia 8
//
//Polecenie 
// Prosze napisać kod, który będzie implementował samochód, skrzynie biegów oraz silnik..
// Pliku Main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
// KISS - Keep It Simple Stupid - Kod powinien być tak prosty, jak to tylko możliwe. Co prawda likwidacja muchy za pomocą armaty może być widowiskowa, ale później i tak trzeba będzie posprzątać. 
// YANGI - You Aren’t Gonna Need It. - Co należy robić z kodem, którego nie potrzebujesz ? Bezwzględnie go usuwać. Nie przekształcać w komentarz, bo „może się potem przyda”. 
// DRY - Don’t Repeat Yourself. - Nie rób powtórzeń w kodzie źródłowym. Każdy programista i programistka powinien zauważać takie sytuacje niemal natychmiast – i sprawnie sobie z nimi radzić. 
//
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
//
//
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab02/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar.gz
//
//
// * wszystkie funkcje w plikach *.h powinny być okomentowane (patrz przyklad w pliku StackOperations.h (format pod Doxygena))
// * do alokacji i dealokacji pamięci używaj operatorów: new i delete
//
// Powodzenia


#include "Car.h"
#include <vector>
#include <thread>
#include <chrono>

int main() {
    std::cout << "=== Vehicle Simulation ===\n\n";

    Car skoda("Skoda", "Octavia", "2.0 TDI");
    Car toyota("Toyota", "Supra", "3.0 Turbo", "Manual 6-speed");

    skoda.start();
    skoda.accelerate(3200);
    skoda.shiftUp();
    skoda.shiftUp();

    toyota.start();
    toyota.accelerate(6000);

    std::cout << "\n--- Status ---\n";
    skoda.printStatus();
    toyota.printStatus();

    std::cout << "\nTotal cars: " << Car::getTotalCars() << "\n";
    std::cout << "Engines running: " << Engine::getRunningEngines() << "\n";

    return 0;
}


// === Vehicle Simulation ===

// [Engine] Created: 2.0 TDI
// [Transmission] Created: Manual 6-speed
// [INFO] Car created: Skoda Octavia
// [Engine] Created: 3.0 Turbo
// [Transmission] Created: Manual 6-speed
// [INFO] Car created: Toyota Supra
// [INFO] Skoda Octavia started
// [INFO] Toyota Supra started

// --- Status ---
// Car: Skoda Octavia
//   Engine: 2.0 TDI | 3200 RPM | 28.2°C | RUNNING
//   Transmission: Manual 6-speed | Gear: 2

// Car: Toyota Supra
//   Engine: 3.0 Turbo | 6000 RPM | 31°C | RUNNING
//   Transmission: Manual 6-speed | Gear: N


// Total cars: 2
// Engines running: 2
// [INFO] Car destroyed: Toyota Supra
// [Transmission] Destroyed: Manual 6-speed
// [Engine] Destroyed: 3.0 Turbo
// [INFO] Car destroyed: Skoda Octavia
// [Transmission] Destroyed: Manual 6-speed
// [Engine] Destroyed: 2.0 TDI