// 22.01.2026
// CWL 3
// Laboratorium Język C++ - Zajęcia 14
//
//Polecenie
// Prosze napisać kod, który będzie wykorzystywał mechanizm dziedziczenia i przeciążenia operatorów i zdefiniuje postacie gry RPG.
// Pliku main.cpp, nie wolno modyfikowac - poza jednym przypadkiem - naprawy błędu, wtedy należy zakomentować odpowiedni fragment kodu, zakomentować i zapisać wersje poprawną
// W pliku README.md omówiono założenia jakie ma spełniać dana klasa,
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

#include "Warrior.h"
#include "Mage.h"
#include "Knight.h"
#include "Rogue.h"
#include "Logger.h"

#include <iostream>

int main() {
    LOG_INFO("Game started");

    Warrior w("Conan");
    Mage m("Gandalf");
    Knight k("Arthur");

    m.castSpell(w);
    w.defend(30);

    std::cout << w << std::endl;

    k.train();
    std::cout << "Knight trained\n";

    Rogue r("Shadow");
    r.sneakAttack(w);
    r.showStats();

    Entity* e1 = new Warrior("TempWarrior");
    delete e1;

    //Character* c = new Rogue("TempRouge");

    LOG_INFO("Game ended");
    return 0;
}


// Run 1 

// [ 12%] Building CXX object CMakeFiles/rpg.dir/main.cpp.o
// /home/mkrzywda/JCpp/ProgrammingLanguageClass/lab14/main.cpp: In function ‘int main()’:
// /home/mkrzywda/JCpp/ProgrammingLanguageClass/lab14/main.cpp:33:37: error: ‘Character’ is an inaccessible base of ‘Rogue’
//    33 |     Character* c = new Rogue("Error"); // BŁĄD KOMPILACJI
//       |                                     ^
// make[2]: *** [CMakeFiles/rpg.dir/build.make:76: CMakeFiles/rpg.dir/main.cpp.o] Error 1
// make[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/rpg.dir/all] Error 2
// make: *** [Makefile:91: all] Error 2



// Run 2

// [INFO] Game started
// HP: 90, Level: 1
// Knight trained
// [INFO] Sneak attack!
// Rogue HP: 90, Strength: 25, Agility: 30
// Entity destroyed
// [INFO] Game ended
// Character destroyed
// Entity destroyed
// Knight destroyed
// Warrior destroyed
// Character destroyed
// Entity destroyed
// Mage destroyed
// Character destroyed
// Entity destroyed
// Warrior destroyed
// Character destroyed
// Entity destroyed

