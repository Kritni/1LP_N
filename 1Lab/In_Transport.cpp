#include "In_Transport.h"
#include "In_Airplane.h"
#include "In_Train.h"

Transport* In_Transport(ifstream& ifst) {
    Transport *T = new Transport; //Выделяем память под новый траспорт
    int K; //Идентификатор транспорта

    ifst >> K; //Считываем из файла идентификатор транспорта
    if (K == 1) { //Если K == 1, то это самолет
        T = (Transport*)In_Airplane(ifst); //Считываем информацию о самолете
        T->K = AIRPLANE; //Записывает то, что это самолет
    }
    else if (K == 2) { //Если K == 2, то это поезд
        T = (Transport*)In_Train(ifst);
        T->K = TRAIN; //Записывает то, что это поезд
    }
    else {
        return 0;
    }

    return T;
}
