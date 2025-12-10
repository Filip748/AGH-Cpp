// 10.12.2025
// CWL 3
// Laboratorium Język C++ - Zajęcia 11
//
//Polecenie
// Prosze napisać kod, który będzie implementował system zadań. Sprawdź plik README.md
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


#include "Game.h"

int main()
{
    Game game;
    game.run();

    return 0;
}

// === Start gry ===

// ====== EPISODE 04 — KONWERSJE + QUESTY ======
// Utworzono 3 nowe postacie wykonujące questy!
// Postać: GoldMiner, HP: 100, DMG: 5
// Postać: SnowCollector, HP: 90, DMG: 3
// Postać: ReindeerHunter, HP: 110, DMG: 6

// Rozpoczynamy wykonywanie questów!
// Mining gold for quest: Mining Gold
// Mining gold for quest: Mining Gold
// Mining gold for quest: Mining Gold
// Mining gold for quest: Mining Gold
// Mining gold for quest: Mining Gold
// Mining gold for quest: Mining Gold
// GoldMiner zdobył: 50 złota!
// Collecting snow for quest: Collect Snow
// Collecting snow for quest: Collect Snow
// Collecting snow for quest: Collect Snow
// Collecting snow for quest: Collect Snow
// Collecting snow for quest: Collect Snow
// Collecting snow for quest: Collect Snow
// SnowCollector zdobył przedmiot: Snow Pouch
// Hunting reindeer for quest: Hunt Reindeer
// Hunting reindeer for quest: Hunt Reindeer
// Hunting reindeer for quest: Hunt Reindeer
// Hunting reindeer for quest: Hunt Reindeer
// Hunting reindeer for quest: Hunt Reindeer
// Hunting reindeer for quest: Hunt Reindeer
// ReindeerHunter otrzymał strażnika nagrody!
// Postać: Reindeer Guardian, HP: 150, DMG: 5
// Bazowe obrażenia: 12
// === Koniec gry ===