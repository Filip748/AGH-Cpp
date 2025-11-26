// 27.11.2025
// CWL 3 
// Laboratorium Język C++ - Zajęcia 7
//
//Polecenie 
// Prosze napisać kod, który będzie implementował system biblioteczny - bazując na zachowaniu.
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


#include "../include/Librarian.hpp"
#include <iostream>

int main() {

    Librarian bib;

    // Dodajemy książki do systemu
    bib.addBook("1984", "George Orwell", 1949);
    bib.addBook("Zabić drozda", "Harper Lee", 1960);
    bib.addBook("Władca Pierścieni", "J.R.R. Tolkien", 1954);
    bib.addBook("Mały Książę", "Antoine de Saint-Exupéry", 1943);
    bib.addBook("Dune", "Frank Herbert", 1965);

    bib.showAllBooks();

    std::cout << "\n=== Faza 1: Masowe wypożyczenia (czytelnicy szaleją) ===\n";
    bib.borrowBookByCatalog(1001);  // 1984
    bib.borrowBookByCatalog(1004);  // Mały Książę
    bib.borrowBookByCatalog(1001);  // 1984 – już wypożyczona → nie da rady
    bib.borrowBookByCatalog(1003);  // Władca Pierścieni
    bib.borrowBookByCatalog(1004);  // Mały Książę – drugi raz
    bib.borrowBookByCatalog(1005);  // Dune
    bib.borrowBookByCatalog(1004);  // Mały Książę – trzeci raz!

    bib.showAllBooks();
    bib.showAllBooksWithSecretInfo();

    std::cout << "\n=== Faza 2: Zwroty książek ===\n";
    Book* returned;
    returned = bib.findBookByCatalog(1001);
    if (returned) returned->returnBook();

    returned = bib.findBookByCatalog(1004);
    if (returned) returned->returnBook();

    returned = bib.findBookByCatalog(1005);
    if (returned) returned->returnBook();

    bib.showAllBooks();

    std::cout << "\n=== Faza 3: Bibliotekarz sprawdza zużycie i naprawia książki ===\n";
    bib.showAllBooksWithSecretInfo();

    std::cout << "\n→ Naprawiamy mocno zużyty egzemplarz \"Małego Księcia\"\n";
    bib.repairBook(1004);

    std::cout << "\n→ Naprawiamy też \"1984\" (była wypożyczana 2 razy)\n";
    bib.repairBook(1001);

    bib.showAllBooksWithSecretInfo();

    std::cout << "\n=== Faza 4: Jeszcze jedno wypożyczenie po naprawie ===\n";
    bib.borrowBookByCatalog(1004); 
    bib.borrowBookByCatalog(1001);

    std::cout << "\n=== Końcowy stan biblioteki ===\n";
    bib.showAllBooks();
    bib.showAllBooksWithSecretInfo();

    std::cout << "\nKoniec dnia pracy. Bibliotekarz zamyka bibliotekę.\n";
    std::cout << "Wszystkie książki zostaną automatycznie usunięte przez destruktory.\n";

    return 0;
}


// === Książki w bibliotece (widok publiczny) ===
// 1984 - George Orwell (1949) | Dostępna | Wypożyczono razy: 0
// Zabić drozda - Harper Lee (1960) | Dostępna | Wypożyczono razy: 0
// Władca Pierścieni - J.R.R. Tolkien (1954) | Dostępna | Wypożyczono razy: 0
// Mały Książę - Antoine de Saint-Exupéry (1943) | Dostępna | Wypożyczono razy: 0
// Dune - Frank Herbert (1965) | Dostępna | Wypożyczono razy: 0

// === Faza 1: Masowe wypożyczenia (czytelnicy szaleją) ===
// Bibliotekarz wypożyczył: "1984"
//    → To już 1. raz ta książka została wypożyczona!
// Bibliotekarz wypożyczył: "Mały Książę"
//    → To już 1. raz ta książka została wypożyczona!
// Książka "1984" jest już wypożyczona!
// Bibliotekarz wypożyczył: "Władca Pierścieni"
//    → To już 1. raz ta książka została wypożyczona!
// Książka "Mały Książę" jest już wypożyczona!
// Bibliotekarz wypożyczył: "Dune"
//    → To już 1. raz ta książka została wypożyczona!
// Książka "Mały Książę" jest już wypożyczona!

// === Książki w bibliotece (widok publiczny) ===
// 1984 - George Orwell (1949) | Wypożyczona | Wypożyczono razy: 1
// Zabić drozda - Harper Lee (1960) | Dostępna | Wypożyczono razy: 0
// Władca Pierścieni - J.R.R. Tolkien (1954) | Wypożyczona | Wypożyczono razy: 1
// Mały Książę - Antoine de Saint-Exupéry (1943) | Wypożyczona | Wypożyczono razy: 1
// Dune - Frank Herbert (1965) | Wypożyczona | Wypożyczono razy: 1

// === TAJNE DANE BIBLIOTEKI (tylko dla bibliotekarza!) ===
// Nr kat: 1001 | 1984 | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona
// Nr kat: 1002 | Zabić drozda | Zużycie: 0.0% | Wypożyczono razy: 0 | Dostępna
// Nr kat: 1003 | Władca Pierścieni | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona
// Nr kat: 1004 | Mały Książę | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona
// Nr kat: 1005 | Dune | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona

// === Faza 2: Zwroty książek ===
// Zwrócono książkę: "1984"
// Zwrócono książkę: "Mały Książę"
// Zwrócono książkę: "Dune"

// === Książki w bibliotece (widok publiczny) ===
// 1984 - George Orwell (1949) | Dostępna | Wypożyczono razy: 1
// Zabić drozda - Harper Lee (1960) | Dostępna | Wypożyczono razy: 0
// Władca Pierścieni - J.R.R. Tolkien (1954) | Wypożyczona | Wypożyczono razy: 1
// Mały Książę - Antoine de Saint-Exupéry (1943) | Dostępna | Wypożyczono razy: 1
// Dune - Frank Herbert (1965) | Dostępna | Wypożyczono razy: 1

// === Faza 3: Bibliotekarz sprawdza zużycie i naprawia książki ===

// === TAJNE DANE BIBLIOTEKI (tylko dla bibliotekarza!) ===
// Nr kat: 1001 | 1984 | Zużycie: 5.0% | Wypożyczono razy: 1 | Dostępna
// Nr kat: 1002 | Zabić drozda | Zużycie: 0.0% | Wypożyczono razy: 0 | Dostępna
// Nr kat: 1003 | Władca Pierścieni | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona
// Nr kat: 1004 | Mały Książę | Zużycie: 5.0% | Wypożyczono razy: 1 | Dostępna
// Nr kat: 1005 | Dune | Zużycie: 5.0% | Wypożyczono razy: 1 | Dostępna

// → Naprawiamy mocno zużyty egzemplarz "Małego Księcia"
// Naprawiono książkę nr 1004 («Mały Książę») – nowe zużycie: 0.0%

// → Naprawiamy też "1984" (była wypożyczana 2 razy)
// Naprawiono książkę nr 1001 («1984») – nowe zużycie: 0.0%

// === TAJNE DANE BIBLIOTEKI (tylko dla bibliotekarza!) ===
// Nr kat: 1001 | 1984 | Zużycie: 0.0% | Wypożyczono razy: 1 | Dostępna
// Nr kat: 1002 | Zabić drozda | Zużycie: 0.0% | Wypożyczono razy: 0 | Dostępna
// Nr kat: 1003 | Władca Pierścieni | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona
// Nr kat: 1004 | Mały Książę | Zużycie: 0.0% | Wypożyczono razy: 1 | Dostępna
// Nr kat: 1005 | Dune | Zużycie: 5.0% | Wypożyczono razy: 1 | Dostępna

// === Faza 4: Jeszcze jedno wypożyczenie po naprawie ===
// Bibliotekarz wypożyczył: "Mały Książę"
//    → To już 2. raz ta książka została wypożyczona!
// Bibliotekarz wypożyczył: "1984"
//    → To już 2. raz ta książka została wypożyczona!

// === Końcowy stan biblioteki ===

// === Książki w bibliotece (widok publiczny) ===
// 1984 - George Orwell (1949) | Wypożyczona | Wypożyczono razy: 2
// Zabić drozda - Harper Lee (1960) | Dostępna | Wypożyczono razy: 0
// Władca Pierścieni - J.R.R. Tolkien (1954) | Wypożyczona | Wypożyczono razy: 1
// Mały Książę - Antoine de Saint-Exupéry (1943) | Wypożyczona | Wypożyczono razy: 2
// Dune - Frank Herbert (1965) | Dostępna | Wypożyczono razy: 1

// === TAJNE DANE BIBLIOTEKI (tylko dla bibliotekarza!) ===
// Nr kat: 1001 | 1984 | Zużycie: 5.0% | Wypożyczono razy: 2 | Wypożyczona
// Nr kat: 1002 | Zabić drozda | Zużycie: 0.0% | Wypożyczono razy: 0 | Dostępna
// Nr kat: 1003 | Władca Pierścieni | Zużycie: 5.0% | Wypożyczono razy: 1 | Wypożyczona
// Nr kat: 1004 | Mały Książę | Zużycie: 5.0% | Wypożyczono razy: 2 | Wypożyczona
// Nr kat: 1005 | Dune | Zużycie: 5.0% | Wypożyczono razy: 1 | Dostępna

// Koniec dnia pracy. Bibliotekarz zamyka bibliotekę.
// Wszystkie książki zostaną automatycznie usunięte przez destruktory.