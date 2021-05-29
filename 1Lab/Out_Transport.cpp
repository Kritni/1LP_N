#include "Out_Transport.h"
#include "Out_Airplane.h"
#include "Out_Train.h"

void Out_Transport(Transport* T, ofstream& ofst) {
    if (T->K == AIRPLANE) {
        Out_Airplane(T->Speed, T->Distance, (Airplane*)T, ofst); //Выводим информацию о самолете
    }
    else if (T->K == TRAIN) {
        Out_Train(T->Speed, T->Distance, (Train*)T, ofst); //Выводим информацию о поезде
    }
    else {
        ofst << "Incorrect element!" << endl;
    }
}
