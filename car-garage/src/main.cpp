#include <iostream>
#include <memory>

#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"
#include "Motorcycle.hpp"
#include "Garage.hpp"

int main() {
    std::cout << "Start system...\n\n";

    // 1. Tworzymy obiekt garażu
    Garage myGarage;

    // 2. Dodajemy pojazdy do garażu
    // Używamy std::make_unique do tworzenia obiektów pochodnych i przekazujemy je jako wskaźniki na klasę bazową (Pojazd)
    myGarage.addVehicle(std::make_unique<Car>("Toyota", "Corolla", 2020, 5, EngineType::Hybrid));
    myGarage.addVehicle(std::make_unique<Truck>("Volvo", "FH16", 2018, 20000));
    myGarage.addVehicle(std::make_unique<Motorcycle>("Yamaha", "MT-07", 2022, DriveType::Chain));

    // 3. Testujemy polimorfizm - wyświetlanie informacji
    std::cout << "--- GARAGE ---" << std::endl;
    myGarage.showAllVehicles(); 
    // ^ Ta metoda powinna w pętli wywoływać wirtualną metodę wyswietlInformacje() dla każdego pojazdu

    // 4. Testujemy polimorfizm - specyficzne zachowania
    std::cout << "\n--- Sound Symulation ---" << std::endl;
    myGarage.makeNoise(); 
    // ^ Ta metoda powinna wywoływać wirtualną metodę trab() dla każdego pojazdu

    // 5. Obliczenia biznesowe oparte na nadpisanych metodach
    std::cout << "\n--- Cost summary ---" << std::endl;
    double sumInsured = myGarage.calculateInsuranceCost();
    std::cout << "Total insurance cost " << sumInsured  << " PLN" << std::endl;

    return 0;
}