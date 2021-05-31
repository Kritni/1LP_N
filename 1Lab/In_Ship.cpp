#include "In_Ship.h"

Ship* In_Ship(ifstream& ifst) {
    Ship* S = new Ship; //Выделяем память под корабль

    ifst >> S->Speed; //Считываем скорость
    ifst >> S->Distance; //Считывает расстояние м/у пунктами отправления и назначения
    ifst >> S->Displacement; //Считываем водоизмещение

    string Temp = ""; //Временная строка, в которую считываем тип корабля

    ifst >> Temp; //Считываем тип корабля

    if (Temp == "Liner") {
        S->T = S->LINER;
    }
    else if (Temp == "Towboat") {
        S->T = S->TOWBOAT;
    }
    else if (Temp == "Tanker") {
        S->T = S->TANKER;
    }

    return S;
}