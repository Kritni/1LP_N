#include "Transport_Travel_time.h"
#include "Airplane_Travel_time.h"
#include "Train_Travel_time.h"

double Transport_Travel_time(Transport* T) {
    if (T->K == AIRPLANE) { 
        return Airplane_Travel_time(T->Speed, T->Distance); 
    }
    else if (T->K == TRAIN) {
        return Train_Travel_time(T->Speed, T->Distance);
    }
    else {
        return -1;
    }
}