// 03.12.2025
// CWL 3
// Laboratorium Język C++ - Zajęcia 9
//
//Polecenie
// Prosze napisać kod, który będzie implementował podstawowe elementy gry RPG.
// Pliku main.cpp, nie wolno modyfikowac.
// Pliku Game.h i Game.cpp nie wolno zmieniać
// W pliku README.md omówiono założenia jakie ma spełniać dana klasa,
// Każda metoda powinna zawierać logger do DEBUGGowania, można w tym celu zaimplementować własną klase albo robić to zwykłym COUTEM.
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



#include "../include/Game.h"

int main()
{
    Game game;
    game.run();

    return 0;
}


// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor domyślny: Rycerz
// [DEBUG][Game] Konstruktor
// === Start gry ===

// === EPIZOD 1 ===
// Zadanie: Stworzyć postać, miecz i dodać go do ekwipunku.
// [DEBUG][Game] Wyświetlam statystyki gracza...

// === Postać ===
// Imię: Rycerz
// HP: 100
// [DEBUG][Game] Tworzę miecz...
// [DEBUG][Item] Konstruktor parametryczny: Miecz Rycerski
// [DEBUG][Game] Dodaję miecz do ekwipunku...
// [DEBUG][Inventory] Dodano: Miecz Rycerski

// --- Ekwipunek ---
// Miecz Rycerski (DMG: 15, Wartość: 50)
// [DEBUG][Item] Destruktor: Miecz Rycerski

// === EPIZOD 2 ===
// Tu będzie kolejne zadanie.
// Szczególy: 04.12.2025.

// === EPIZOD 3 ===
// Tu będzie kolejne zadanie.
// Szczególy: 11.12.2025.

// === EPIZOD 4 ===
// Tu będzie kolejne zadanie.
// Szczególy: 18.12.2025.

// === EPIZOD 5 ===
// Tu będzie kolejne zadanie.
// Szczególy: 15.01.2025.
// === Koniec gry ===
// [DEBUG][Game] Destruktor
// [DEBUG][Character] Destruktor: Rycerz
// [DEBUG][Inventory] Destruktor
// [DEBUG][Item] Destruktor: Miecz Rycerski
