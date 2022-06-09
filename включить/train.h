// Copyright 2022 NNTU-CS
#define INCLUDETRAIN_H_

class Train {
 private:
  struct Cage {
    bool light; // состояние лампочки
    Cage *next;
    Cage *prev;
  };
  int countOp; // счетчик шагов (число переходов из вагона в вагон)
  Cage *first; // точка входа в поезд (первый вагон)
  Cage* tail, * current;
    struct Cage {
        bool light; // состояние лампочки
        Cage* next;
        Cage* prev;
    };
    int countOp; // счетчик шагов (число переходов из вагона в вагон)
    Cage* first; // точка входа в поезд (первый вагон)
    Cage* tail, * current;
    Train::Cage* create(bool light) {
        Cage* cage = new Cage;
        cage->light = light;
        cage->next = nullptr;
        cage->prev = nullptr;
        return cage;
    }
    bool isEmpty() const {
        return !first;
    }

 public:
  Train();
  void addCage(bool light); // добавить вагон с начальным состоянием лампочки
  int getLength();          // вычислить длину поезда
  int getOpCount();         // вернуть число переходов (из вагона в вагон)
    Train(): first(nullptr), tail(nullptr), current(nullptr), countOp(0) {}
    void addCage(bool light); // добавить вагон с начальным состоянием лампочки
    int getLength();          // вычислить длину поезда
    int getOpCount();  // вернуть число переходов (из вагона в вагон)
};
