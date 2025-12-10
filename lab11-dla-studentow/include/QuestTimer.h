#ifndef QUESTTIMER_H
#define QUESTTIMER_H

class QuestTimer {
private:
    int duration;
    int count;

public:
    // jawny konstruktor ustawiajacy czas trwania
    explicit QuestTimer(int dur);

    // zwieksza liczmik czasu
    void tick();

    // zwraca true dopoki operator nie osiegnie konca
    explicit operator bool() const;

    int getElapsed() const { return count; };
    int getDuration() const { return duration; };
};

#endif

