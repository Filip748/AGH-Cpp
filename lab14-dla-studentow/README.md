# RPG – projekt C++ (dziedziczenie i przeciążanie operatorów)

## Opis projektu

Projekt przedstawia uproszczony model gry RPG napisany w języku **C++**, którego celem jest przećwiczenie:

* dziedziczenia (`public`, `private`, wielopoziomowego),
* przeciążania operatorów,
* użycia modyfikatorów dostępu (`public`, `protected`, `private`),

Projekt **nie wykorzystuje klas ani metod wirtualnych**.
W Kodzie może znajdować sie błąd kompilacji, jak sie znajduje to należy go poprawić według swojej najlepszej wiedzy.

---

## Struktura projektu

```
├── CMakeLists.txt
├── README.md
├── build
├── include
│   ├── Character.h
│   ├── Entity.h
│   ├── Knight.h
│   ├── Mage.h
│   ├── Rogue.h
│   └── Warrior.h
├── main.cpp
└── src
    ├── Character.cpp
    ├── Entity.cpp
    ├── Knight.cpp
    ├── Mage.cpp
    ├── Rogue.cpp
    └── Warrior.cpp
```

---

## Opis klas

### `Entity`

Klasa bazowa reprezentująca byt w grze.

* przechowuje punkty życia i poziom,
* przeciążone operatory: `==`, `+=`, `<<`.

### `Character` (dziedziczenie `public`)

* rozszerza `Entity` o nazwę i siłę,
* posiada metodę ataku,
* jawnie zdefiniowany operator przypisania (`=`).

### `Warrior` (dziedziczenie `public`)

* dodaje pancerz,
* posiada metodę obrony,
* przeciążony operator `+`.

### `Knight` (dziedziczenie wielopoziomowe, `public`)

* rozszerza `Warrior`,
* posiada honor,
* przeciążony operator `>`.

### `Mage` (dziedziczenie `public`)

* dodaje manę,
* posiada metodę rzucania czarów.

### `Rogue` (dziedziczenie `private`)

* dziedziczy **prywatnie** po `Character`,
* demonstruje różnicę między relacją *is-a* a *implemented-in-terms-of*,
* nie może być traktowany jako `Character` ani `Entity`.

---

## Logger (Debug / Release)

Projekt zawiera prosty mechanizm logowania oparty na makrach preprocesora.

* W trybie **Debug** wyświetlane są komunikaty `[DEBUG]`.
* W trybie **Release** komunikaty debugowe są pomijane.

Makro:

```cpp
LOG_DEBUG("tekst");
LOG_INFO("tekst");
```

