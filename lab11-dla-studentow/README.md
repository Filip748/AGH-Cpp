# **EPISODE 3 – System Questów, Nagrody i Konwersje**

W tym epizodzie należy zaimplementować pełny system zadań (questów), który pozwala:

* tworzyć różne typy zadań,
* wykonywać je w kontrolowany sposób (czas trwania),
* zwracać różne typy nagród,
* konwertować nagrody do właściwych obiektów (złoto, przedmiot, towarzysz),
* wykonywać operacje konwersji jawnej i niejawnej oraz rzutowania (`static_cast`, `reinterpret_cast`, `const_cast`).

Epizod przewiduje pięć modułów

---

# 🏆 **1. RewardType (RewardType.h)**

Typ wyliczeniowy określający **jakiego rodzaju nagrodę dane zadanie zwraca**.

### **Wymagania:**

* Enum silnie typowany (`enum class`)
* Dostępne wartości:

  * Gold – nagroda w postaci złota
  * Item – nagroda w postaci przedmiotu
  * Companion – nagroda w postaci towarzysza (SantaClauss)

---

# 🎁 **2. Klasa Reward (Reward.h / Reward.cpp)**

Reprezentuje **nagrodę otrzymywaną po wykonaniu questa**.
Nagroda może przyjmować różne formy, dlatego klasa musi umieć obsłużyć kilka typów danych jednocześnie.

### **Wymagania:**

#### **Konstruktory:**

* Konstruktor nagrody w postaci złota (int)
* Konstruktor nagrody w postaci przedmiotu (Item)
* Konstruktor nagrody w postaci towarzysza (SantaClauss)
* Każdy konstruktor musi być `explicit`

#### **Pola (prywatne):**

* typ nagrody (RewardType)
* wartość złota
* nagrodzony przedmiot
* nagrodzony towarzysz

#### **Konwersje operatorów:**

* `Reward → int` (wydobycie wartości złota)
* `Reward → Item`
* `Reward → SantaClauss`
* Trzeba coś zrobić, aby wymusić stosowanie `static_cast`

#### **Metody:**

* metoda zwracająca RewardType (np. `getType()`)


---

# 📜 **3. Klasa Quest (Quest.h / Quest.cpp)**

Reprezentuje **zadanie**, które gracz może wykonać.
Nie wykonuje pracy sama – jest opisem, który przekazywany jest do funkcji questowych.

### **Wymagania:**

#### **Konstruktory:**

* Niejawny konstruktor z napisem (const char*)
* Jawny konstruktor z `std::string` i czasem trwania
* Konstruktor powinien inicjalizować:

  * nazwę zadania
  * czas wykonywania
  * status ukończenia (false)
  * licznik wykonań (mutable)

#### **Pola:**

* nazwa zadania
* czas trwania (liczba kroków)
* flaga ukończenia
* licznik wykonań (aby można go aktualizować w metodach const)

#### **Metody:**

* Metoda która zwiększa licznik wykonań 
* Metoda pobierająca nazwę
* jawna konwersja do `std::string`

---

# ⏳ **4. Klasa QuestTimer (QuestTimer.h / QuestTimer.cpp)**

Prosty licznik symulujący czas trwania zadania.
Timer nie używa wątków – działa na logice kroków.

### **Wymagania:**

#### **Konstruktory:**

* Jawny konstruktor ustawiający czas trwania (w krokach)

#### **Pola:**

* czas trwania
* licznik wykonanych kroków

#### **Metody:**

* `tick()` – zwiększa licznik czasu
* Jawny operator `operator bool()`:

  * zwraca true dopóki timer nie osiągnął końca

### **Rola:**

* Pozwala używać timerów w intuicyjnych pętlach:

  ```
  while (timer) { ... }
  ```

---

# ⚒️ **5. questFunctions (questFunctions.h / questFunctions.cpp)**

Zbiór funkcji reprezentujących **konkretne zadania**, które gracz może wykonać.

Każda funkcja ma identyczny schemat:

### **Wymagania dla każdej funkcji:**

* Przyjmuje obiekt Quest jako argument **przez referencję do stałej**.
* Wykonuje krok zadania (wywołanie metody z mutable).
* Wyświetla opis tego, co robi zadanie.
* Tworzy i zwraca odpowiedni obiekt Reward.

### **Obowiązkowe funkcje:**

* `miningGold` – wydobywanie złota
* `collectSnow` – zbieranie śniegu
* `huntReindeer` – polowanie na renifery

Każda z nich powinna mieć swój charakter, np.:

* mining → nagroda w postaci złota
* snow → nagroda jako Item
* reindeer → nagroda jako SantaClauss (towarzysz)


---
