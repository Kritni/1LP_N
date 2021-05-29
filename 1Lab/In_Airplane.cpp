#include "In_Airplane.h"

Airplane* In_Airplane(ifstream& ifst) {
    Airplane* A = new Airplane; //Выделяем память под самолет
    
    ifst >> A->Speed; //Считываем скорость
    ifst >> A->Distance; //Считывает расстояние м/у пунктами отправления и назначения
    ifst >> A->Flight_range; //Считываем дальность полета
    ifst >> A->Load_capacity; //Считываем грузоподъемность

    return A;
}