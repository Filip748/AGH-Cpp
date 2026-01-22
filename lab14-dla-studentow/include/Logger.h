#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

#ifdef NDEBUG
    // Wersja Release - puste makra
    #define LOG_DEBUG(x)
    #define LOG_INFO(x)
#else
    // Wersja Debug
    #define LOG_DEBUG(x) std::cout << "[DEBUG] " << x << std::endl
    #define LOG_INFO(x) std::cout << "[INFO] " << x << std::endl
#endif

#endif // LOGGER_H