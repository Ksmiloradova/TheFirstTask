//------------------------------------------------------------------------------
// train.cpp - содержит функции обработки поезда
//------------------------------------------------------------------------------

#include "train.h"

//------------------------------------------------------------------------------
// Ввод параметров поезда из потока
bool In(train &t, ifstream &ifst) {
    ifst >> t.numberOfWagons;
    return (t.numberOfWagons > 0 && t.numberOfWagons <= 75);
}

// Случайный ввод параметров поезда
void InRnd(train &t) {
    t.numberOfWagons = 10 + rand() % (75 - 10 + 1);
}

//------------------------------------------------------------------------------
// Вывод параметров поезда в поток
void Out(train &t, ofstream &ofst) {
    ofst << "It is Train: numberOfWagons = "
         << t.numberOfWagons;
}
