#include "In_Train.h"

Train* In_Train(ifstream& ifst) {
    Train* T = new Train; //Выделяем память для поезда

    ifst >> T->Speed; //Считываем скорость
    ifst >> T->Distance; //Считывает расстояние м/у пунктами отправления и назначения
    ifst >> T->Сars_amount; //Считываем число вагонов
    
    return T;
}