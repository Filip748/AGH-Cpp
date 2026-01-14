#include "Game.h"

int main()
{
    Game game;
    game.run();

    return 0;
}

// [DEBUG][Inventory] Konstruktor
// [DEBUG][Game] Konstruktor
// === Start gry ===

// [Start]
// Hero[Explorer] HP=120 Energy=60 Alive=yes
// Hero[Guardian] HP=140 Energy=40 Alive=yes
// [DEBUG] Action ctor (Attack): Strike
// [DEBUG] Action ctor (Solo): HealPulse
// [DEBUG] Action ctor (Solo): Rest

// [Akcje początkowe]
// Action{name='Strike', type=0, power=10, calls=0, hasTarget=1}
// Action{name='HealPulse', type=1, power=6, calls=0, hasTarget=0}
// Action{name='Rest', type=2, power=8, calls=0, hasTarget=0}
// [DEBUG] Action copy ctor: Rest
// [DEBUG] ~Action(): Rest

// [Po ++/--]
// Action{name='Strike', type=0, power=11, calls=0, hasTarget=1}
// Action{name='HealPulse', type=1, power=5, calls=0, hasTarget=0}
// Action{name='Rest', type=2, power=9, calls=0, hasTarget=0}

// Moc strike (static_cast<int>): 11

// [Po >>]
// Action{name='Thunder', type=0, power=15, calls=0, hasTarget=1}
// [DEBUG] ActionQueue ctor
// [DEBUG] Action copy ctor: Thunder
// [DEBUG] Action copy ctor: Thunder
// [DEBUG] ~Action(): Thunder
// [DEBUG] Action copy ctor: HealPulse
// [DEBUG] Action copy ctor: HealPulse
// [DEBUG] ~Action(): HealPulse
// [DEBUG] Action copy ctor: Rest
// [DEBUG] Action copy ctor: Rest
// [DEBUG] ~Action(): Rest

// [Kolejka] size=5

// [RUN]
// [Action] Explorer uses 'Thunder' on Guardian dmg=15 (calls=1)
// [Action] Explorer uses 'Thunder' on Guardian dmg=15 (calls=1)
// [Lambda] Status:
// Hero[Explorer] HP=120 Energy=30 Alive=yes
// Hero[Guardian] HP=110 Energy=40 Alive=yes
// [Action] Explorer uses 'HealPulse' heal=5 (calls=1)
// [Action] Explorer uses 'Rest' rest=9 (calls=1)
// [DEBUG] ~Action(): Thunder
// [DEBUG] ~Action(): HealPulse
// [DEBUG] ~Action(): Rest

// [Po wykonaniu]
// Hero[Explorer] HP=125 Energy=34 Alive=yes
// Hero[Guardian] HP=110 Energy=40 Alive=yes

// [Oryginalny strike po run]
// Action{name='Thunder', type=0, power=15, calls=1, hasTarget=1}
// [DEBUG] ActionQueue dtor
// [DEBUG] ~Action(): Rest
// [DEBUG] ~Action(): HealPulse
// [DEBUG] ~Action(): Thunder
// [DEBUG] ~Hero(): Guardian
// [DEBUG] ~Hero(): Explorer
// === Koniec gry ===
// [DEBUG][Game] Destruktor
// [DEBUG][Character] Destructor called for Unknown
// [DEBUG][Inventory] Destruktor