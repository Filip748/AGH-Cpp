# 🧱 **Your Own C++ Based RPG**

---

# 1️⃣ **Klasa Item** 
### Metody, które muszą istnieć:

```cpp
Item::Item() 
→ konstruktor domyślny

Item::Item(string name, int dmg, int value) 
→ konstruktor parametryczny do tworzenia broni/przedmiotów

Item::~Item() 
→ destruktor (na potrzeby debugowania, pokazuje niszczenie obiektu)
```

### Rola:

* reprezentuje broń lub przedmiot
* musi mieć pola: `name`, `damage`, `value`

---

# 2️⃣ **Klasa Inventory** (ekwipunek)

### Metody:

```
Inventory::Inventory() 
→ konstruktor (inicjalizacja pustego ekwipunku)

Inventory::~Inventory() 
→ destruktor (pokazuje niszczenie ekwipunku)

Inventory::add(const Item&) 
→ dodaje przedmiot do wektora items

Inventory::show() const 
→ wypisuje zawartość ekwipunku
```

### Rola:

* przechowuje listę przedmiotów
* umożliwia dodawanie i podgląd wyposażenia

---

# 3️⃣ **Klasa Character** (bohater gry)

### Metody:

```
Character::Character() 
→ konstruktor domyślny

Character::Character()
→ konstruktor parametryczny

Character::~Character() 
→ destruktor (debug)

Character::showStats() const 
→ wypisuje dane postaci

Character::getInventory() 
→ zwraca referencję do ekwipunku postaci
```

### Rola:

* reprezentuje gracza
* posiada ekwipunek
* potrafi wypisywać swoje statystyki

---

# 4️⃣ **Klasa Game** (główna logika gry)

### Metody obowiązkowe:

```
Game::Game() 
→ konstruktor

Game::~Game() 
→ destruktor (debug)

Game::run() 
→ punkt startowy gry (odpala epizody)

Game::episode1() 
→ pierwszy „tydzień / zadanie” – stworzenie postaci i miecza

Game::episode2()
Game::episode3()
Game::episode4()
Game::episode5()
→ puste funkcje / szablony na przyszłe zadania
```

### Rola:

* kontroluje przebieg gry
* odpowiada za logikę epizodów
* tworzy i przechowuje głównego bohatera gry (`Character player`)

---

# 5️⃣ **Główna funkcja programu**

### W `main.cpp`:

```
Game game;
game.run();
```

### Rola:

* startuje grę
* deleguje działanie do klasy Game

---