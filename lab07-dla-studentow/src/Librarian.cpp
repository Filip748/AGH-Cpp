#include "../include/Librarian.hpp"
#include <iostream>

Librarian::Librarian() : m_books(nullptr), m_size(0), m_nextCatalog(1001) {}

Librarian::~Librarian() {
    for(int i = 0; i < m_size; i++) {
        delete m_books[i];
    }
    delete[] m_books;
}

void Librarian::addBook(std::string title, std::string author, int year) {
    Book** newArr = new Book*[m_size + 1];
    for(int i = 0; i < m_size; i++) {
        newArr[i] = m_books[i];
    }

    newArr[m_size] = new Book(title, author, year, m_nextCatalog++);

    delete[] m_books;
    m_books = newArr;
    m_size++;
}

void Librarian::showAllBooks() const {
#ifdef PUBLIC_MODE
    std::cout << "\n=== Książki w bibliotece (widok publiczny) ===\n";
    for(int i = 0; i < m_size; i++) {
        m_books[i]->showPublic();
    }
#endif
}


Book* Librarian::findBookByCatalog(int catalog) {
    for(int i = 0; i < m_size; i++) {
        if(m_books[i]->getCatalogNumber() == catalog) {
            return m_books[i];
        }
    }
    return nullptr;
}

void Librarian::borrowBookByCatalog(int catalog) {
    Book* b = findBookByCatalog(catalog);
    if(!b) return;
    
    if(b->borrowBook()) {
        std::cout << "Bibliotekarz wyporzyczyl " << b->getTitle() << "\n";
        std::cout << "To juz" << b->getBorrowCount() << "raz ta ksiazka zostala wypozyczona\n";
    }
    else {
        std::cout << "Ksiazka wypozyczona";
    }
}

void Librarian::showAllBooksWithSecretInfo() const {
#ifdef PRIV_MODE
    std::cout << "\n=== TAJNE DANE BIBLIOTEKI (tylko dla bibliotekarza!) ===\n";
    for(int i = 0; i < m_size; i++) {
        m_books[i]->showSecret();
    }
#endif
}


void Librarian::repairBook(int catalog) {
    Book* b = findBookByCatalog(catalog);
    if (!b) return;

    b->repair();
    std::cout << "Naprawiono książkę nr " << catalog << " («" << b->getTitle() << "») – nowe zużycie: " << b->getWearLevel() << "%\n";

}
