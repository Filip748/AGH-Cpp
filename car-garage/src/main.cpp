    #include <iostream>
    #include <memory>

    #include "Vehicle.hpp"
    #include "Car.hpp"
    #include "Truck.hpp"
    #include "Motorcycle.hpp"
    #include "Garage.hpp"

    int main() {
        std::cout << "Start system...\n\n";

        Garage myGarage;

        myGarage.addVehicle(std::make_unique<Car>("Toyota", "Corolla", 2020, 5, EngineType::Hybrid));
        myGarage.addVehicle(std::make_unique<Truck>("Volvo", "FH16", 2018, 20000));
        myGarage.addVehicle(std::make_unique<Motorcycle>("Yamaha", "MT-07", 2022, DriveType::Chain));

        
        std::cout << "--- GARAGE ---" << std::endl;
        myGarage.showAllVehicles(); 
        
        std::cout << "\n--- Sound Symulation ---" << std::endl;
        myGarage.makeNoise(); 

        std::cout << "\n--- Cost summary ---" << std::endl;
        double sumInsured = myGarage.calculateInsuranceCost();
        std::cout << "Total insurance cost " << sumInsured  << " PLN" << std::endl;

        return 0;
    }