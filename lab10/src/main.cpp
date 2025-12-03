// 04.12.2025
// CWL 3
// Laboratorium Język C++ - Zajęcia 10
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


#include "Game.h"

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

// ==============================================
//             EPIZOD 3 — KONSTRUKTORY RPG        
// ==============================================
// W krainie Zimowych Cudów rozpoczyna się wojna...

// =====================================================
//                 EPIZOD 3 – KONSTRUKTORY RPG           
// =====================================================

// === 1. Tworzenie Mikołaja różnymi konstruktorami ===
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Święty Mikołaj
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj Wojownik
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj (Poziom 2)
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Delegujący (difficulty)
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Uzbrojony Mikołaj
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Wyposażający
// [DEBUG][Item] Konstruktor parametryczny: Cukrowa Laska
// [DEBUG][Inventory] Dodano: Cukrowa Laska
// [DEBUG][Item] Destruktor: Cukrowa Laska
// [DEBUG][Item] Konstruktor parametryczny: Czapka Mikołaja
// [DEBUG][Item] Destruktor: Cukrowa Laska
// [DEBUG][Inventory] Dodano: Czapka Mikołaja
// [DEBUG][Item] Destruktor: Czapka Mikołaja

// [DOMYŚLNY] 
// === Postać ===
// Imię: Święty Mikołaj
// HP: 120
// Bazowe obrażenia: 15

// [PARAMETRYCZNY] 
// === Postać ===
// Imię: Mikołaj Wojownik
// HP: 150
// Bazowe obrażenia: 25

// [KOPIUJĄCY] 
// === Postać ===
// Imię: Mikołaj Wojownik
// HP: 150
// Bazowe obrażenia: 25

// [DELEGUJĄCY] 
// === Postać ===
// Imię: Mikołaj (Poziom 2)
// HP: 140
// Bazowe obrażenia: 20

// [WYPOSAŻAJĄCY] 
// === Postać ===
// Imię: Uzbrojony Mikołaj
// HP: 130
// Bazowe obrażenia: 20

// === 2. Tworzenie Elfów różnymi konstruktorami ===
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf
// [DEBUG][Elf] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf Strażnik
// [DEBUG][Elf] Parametryczny
// [DEBUG][Elf] Kopiujący
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf Berserker
// [DEBUG][Elf] Parametryczny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf Czarodziej
// [DEBUG][Elf] Parametryczny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Losowy

// [DOMYŚLNY] 
// === Postać ===
// Imię: Elf
// HP: 70
// Bazowe obrażenia: 12

// [PARAMETRYCZNY] 
// === Postać ===
// Imię: Elf Strażnik
// HP: 75
// Bazowe obrażenia: 14

// [KOPIUJĄCY] 
// === Postać ===
// Imię: Elf Strażnik
// HP: 75
// Bazowe obrażenia: 14

// [WARRIOR FACTORY] 
// === Postać ===
// Imię: Elf Berserker
// HP: 80
// Bazowe obrażenia: 14

// [MAGE FACTORY] 
// === Postać ===
// Imię: Elf Czarodziej
// HP: 55
// Bazowe obrażenia: 10

// [LOSOWY ŁUCZNIK] 
// === Postać ===
// Imię: Losowy Elf
// HP: 58
// Bazowe obrażenia: 12

// === 3. Tworzenie armii Elfów różnymi konstruktorami ===
// [DEBUG][ElfArmy] Domyślny
// [DEBUG][ElfArmy] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf
// [DEBUG][Elf] Parametryczny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf
// [DEBUG][Elf] Parametryczny
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elf
// [DEBUG][Elf] Parametryczny
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][ElfArmy] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Elfik
// [DEBUG][Elf] Parametryczny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Zefir
// [DEBUG][Elf] Parametryczny
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elfik
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Grom
// [DEBUG][Elf] Parametryczny
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elfik
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Zefir
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][ElfArmy] Kopiujący
// [DEBUG][ElfArmy] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Losowy
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Losowy
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Losowy
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Losowy Elf
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Losowy
// Przywołano 4 losowych Elfów!

// [PUSTA ARMIA]
// Armia Elfów: 0 jednostek, morale: 0

// [ARMIA MAGÓW]
// Armia Elfów: 3 jednostek, morale: 100

// [IMIENNA ARMIA]
// Armia Elfów: 3 jednostek, morale: 100

// [KOPIA ARMII MAGÓW]
// Armia Elfów: 3 jednostek, morale: 100

// [ARMIA LOSOWA]
// Armia Elfów: 4 jednostek, morale: 100

// === 4. Tworzenie armii Mikołajów różnymi konstruktorami ===
// [DEBUG][SantaArmy] Domyślny
// [DEBUG][SantaArmy] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Święty Mikołaj
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Święty Mikołaj
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Domyślny
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Święty Mikołaj
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Domyślny
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// Przywołano 3 zwykłych Mikołajów!
// [DEBUG][SantaArmy] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj (Poziom 3)
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Delegujący (difficulty)
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj (Poziom 3)
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Delegujący (difficulty)
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// Przywołano 2 elitarnych Mikołajów!
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaArmy] Kopiujący
// [DEBUG][SantaArmy] Domyślny
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj (Poziom 3)
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Delegujący (difficulty)
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj (Poziom 3)
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Delegujący (difficulty)
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][Inventory] Konstruktor
// [DEBUG][Character] Konstruktor parametryczny: Mikołaj (Poziom 3)
// [DEBUG][SantaClauss] Parametryczny
// [DEBUG][SantaClauss] Delegujący (difficulty)
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// Przywołano 3 elitarnych Mikołajów!

// [PUSTA]
// Armia Mikołajów: 0 jednostek, morale: 0

// [3 ZWYKŁYCH]
// Armia Mikołajów: 3 jednostek, morale: 100

// [ELITARNA]
// Armia Mikołajów: 2 jednostek, morale: 120

// [KOPIA ELITARNEJ]
// Armia Mikołajów: 2 jednostek, morale: 120

// [SAMMONE ELITARNYCH]
// Armia Mikołajów: 3 jednostek, morale: 120

// =====================================================
//                    WALKI TESTOWE                     
// =====================================================

// --- WALKA 1 vs 1: Mikołaj (delegujący) vs Elf (losowy) ---
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][Elf] Kopiujący

// > PRZED WALKĄ:

// === Postać ===
// Imię: Mikołaj (Poziom 2)
// HP: 140
// Bazowe obrażenia: 20

// === Postać ===
// Imię: Losowy Elf
// HP: 58
// Bazowe obrażenia: 12

// [Runda 1]
// Mikołaj atakuje za 28
// Elf uderza za 12

// [Runda 2]
// Mikołaj atakuje za 20
// Elf uderza za 12

// [Runda 3]
// Mikołaj atakuje za 25

// > WYNIK WALKI 1v1:
// Mikołaj zwycięża! 🎅

// =====================================================
//                  WALKA ARMIA vs ARMIA                
// =====================================================
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaClauss] Kopiujący
// [DEBUG][SantaArmy] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][Elf] Kopiujący
// [DEBUG][ElfArmy] Kopiujący

// Armia Mikołajów: 2 jednostek, morale: 120

// Armia Elfów: 3 jednostek, morale: 100

// === BITWA ARMII: Mikołaje vs Elfy ===

// ----- RUNDA 1 -----
// Mikołaj uderza za 28
// Elf kontratakuje za 17

// ----- RUNDA 2 -----
// Mikołaj uderza za 32
// Elf kontratakuje za 20

// ----- RUNDA 3 -----
// Mikołaj uderza za 26
// Elf poległ!
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Grom
// [DEBUG][Inventory] Destruktor

// ----- RUNDA 4 -----
// Mikołaj uderza za 31
// Elf kontratakuje za 15

// ----- RUNDA 5 -----
// Mikołaj uderza za 33
// Elf kontratakuje za 20

// ----- RUNDA 6 -----
// Mikołaj uderza za 28
// Elf poległ!
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Grom
// [DEBUG][Inventory] Destruktor

// ----- RUNDA 7 -----
// Mikołaj uderza za 34
// Elf kontratakuje za 21

// ----- RUNDA 8 -----
// Mikołaj uderza za 30
// Elf kontratakuje za 20

// ----- RUNDA 9 -----
// Mikołaj uderza za 33
// Elf poległ!
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Grom
// [DEBUG][Inventory] Destruktor

// === WYNIK BITWY ===
// >>> Mikołaje wygrywają! 🎅

// =====================================================
//                   KONIEC EPIZODU 3                    
// =====================================================

// [DEBUG][ElfArmy] Destruktor
// [DEBUG][SantaArmy] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 2)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaArmy] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaArmy] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaArmy] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 3)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaArmy] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaArmy] Destruktor
// [DEBUG][ElfArmy] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][ElfArmy] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][ElfArmy] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elfik
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Zefir
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Grom
// [DEBUG][Inventory] Destruktor
// [DEBUG][ElfArmy] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][ElfArmy] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Losowy Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf Czarodziej
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf Berserker
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf Strażnik
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf Strażnik
// [DEBUG][Inventory] Destruktor
// [DEBUG][Elf] Destruktor
// [DEBUG][Character] Destruktor: Elf
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Uzbrojony Mikołaj
// [DEBUG][Inventory] Destruktor
// [DEBUG][Item] Destruktor: Cukrowa Laska
// [DEBUG][Item] Destruktor: Czapka Mikołaja
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj (Poziom 2)
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj Wojownik
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Mikołaj Wojownik
// [DEBUG][Inventory] Destruktor
// [DEBUG][SantaClauss] Destruktor
// [DEBUG][Character] Destruktor: Święty Mikołaj
// [DEBUG][Inventory] Destruktor
// === Koniec gry ===
// [DEBUG][Game] Destruktor
// [DEBUG][Character] Destruktor: Rycerz
// [DEBUG][Inventory] Destruktor