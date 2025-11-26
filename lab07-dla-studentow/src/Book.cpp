#include "../include/Book.hpp"
#include <iostream>

Book::Book(std::string title, std::string author, int year, int catalog)
    : m_title(title), m_author(author), m_year(year), m_catalogNumber(catalog),
    m_isBorrow(0), m_borrowCount(0), m_wearLevel(0.0) {}

Book::~Book() {}

bool Book::borrowBook() {
    if(m_isBorrow) return false;

    m_isBorrow = true;
    m_borrowCount++;
    m_wearLevel += 5.0;
    return true;
}

void Book::returnBook() {
    if(m_isBorrow) {
        m_isBorrow = false;
        std::cout << "Zwrocono ksiazke " << m_title << "\n";
    }
}

void Book::repair() {
    m_wearLevel = 0.0;
}

void Book::showPublic() const {
    std::cout << m_title << " - " << m_author << " (" << m_year << ") | "
              << (m_isBorrow ? "Wypożyczona" : "Dostępna")
              << " | Wypożyczono razy: " << m_borrowCount << "\n";
}

void Book::showSecret() const {
    std::cout << "Nr kat: " << m_catalogNumber << " | "
              << m_title << " | Zużycie: " << m_wearLevel << "% | "
              << "Wypożyczono razy: " << m_borrowCount << " | "
              << (m_isBorrow ? "Wypożyczona" : "Dostępna")
              << "\n";
}

