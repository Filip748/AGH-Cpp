#ifndef LIBRARIAN_HPP
#define LIBRARIAN_HPP

#include <string>
#include "Book.hpp"

class Librarian {
private:
    Book** m_books;
    int m_size;
    int m_nextCatalog;

public:
    Librarian();
   
    ~Librarian();

    void addBook(std::string title, std::string author, int year);
    void showAllBooks() const;
    Book* findBookByCatalog(int catalog);
    void borrowBookByCatalog(int catalog);
    void showAllBooksWithSecretInfo() const;
    void repairBook(int catalog);
};

#endif
