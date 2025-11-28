#pragma once
#include <string>
#include <iostream>

class Engine {
private:
    std::string engineCode;
    double currentRpm;
    double temperature;
    bool isRunning;

    static int totalEngines;
    static int runningEngines;

    friend class Car; // Car ma dostęp do pól

public:
    Engine(const std::string& code);
    ~Engine();

    static int getRunningEngines() { return runningEngines; }

    friend std::ostream& operator<<(std::ostream& os, const Engine& e);
};