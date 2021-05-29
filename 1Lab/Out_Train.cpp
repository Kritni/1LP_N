#include "Out_Train.h"

void Out_Train(int Speed, int Distance, Train* T, ofstream& ofst) {
    ofst << "It's a Train with Cars amount: " << T->Ñars_amount << endl;
    ofst << "Its Speed is " << Speed  << " kilometers/hour" << endl;
    ofst << "And Distance is " << Distance << " kilometers" << endl << endl;
}