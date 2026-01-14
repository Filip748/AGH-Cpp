# **EPISODE 5**

W tym zadaniu należy **uzupełnić i rozwinąć system akcji** zaimplementowany jako **oddzielna biblioteka statyczna**, wykorzystywana przez aplikację główną.

Nie wszystkie pliki `.h` i `.cpp` wymagają uzupełnienia.
Niektóre trzeba stworzyć na nowo
Najważniejsze jest **poprawne zastosowanie operatorów, obiektów funkcyjnych oraz mechanizmów STL** zgodnie z dokumentacją.

---

## **1. Klasa Hero**

Należy zaimplementować klasę reprezentującą nowego bohatera gry.

Wymagania:

* przechowywanie stanu bohatera (np. HP, energia),
* metody modyfikujące stan,
* metoda wyświetlająca aktualny stan.

---

## **2. Klasa Action (obiekt funkcyjny)**

Należy zaimplementować klasę reprezentującą **akcję wykonywaną przez bohatera**.

Wymagania:

* przeciążony `operator()` realizujący akcję,
* pole `mutable` zliczające liczbę wywołań akcji,
* konstruktor jednoargumentowy oznaczony jako `explicit`,
* przeciążenie operatorów:

  * `++` oraz `--` (pre i post),
  * `<<` (wypisywanie stanu akcji),
* jawna konwersja:

  * `Action → int` (np. siła akcji),
* niejawna konwersja:

  * `Action → std::function<void()>`,
* zakaz rzutowań w stylu `(typ)` – dozwolone wyłącznie `static_cast`.

---

## **3. ActionQueue**

Należy zaimplementować kontener przechowujący akcje do wykonania.

Wymagania:

* przechowywanie akcji jako `std::function<void()>`,
* możliwość dodawania:
  * obiektów funkcyjnych,
  * lambd,
  * referencji do obiektów (z użyciem `std::ref`),
* metoda wykonująca wszystkie zapisane akcje.

---

## **4. std::function oraz std::ref**

W implementacji i użyciu systemu akcji należy:

* wykorzystać `std::function` jako typ przechowujący akcje,
* użyć `std::ref` do przekazywania akcji bez kopiowania,
* pokazać różnicę pomiędzy:

  * kopią obiektu funkcyjnego,
  * referencją do tego samego obiektu.

---

## **5. Namespace**

Wszystkie klasy i funkcje biblioteki muszą znajdować się w odpowiedniej przestrzeni nazw (np. `RPG::Actions`).

---

## **7. Wymagania globalne**

* brak dziedziczenia i klas wirtualnych,
* obowiązkowe użycie:
  * `operator()`,
  * `std::function`,
  * `std::ref`,
  * `explicit`,
  * `static_cast`,
  * `mutable`,
  * `namespace`,

---
