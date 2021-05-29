#include "Out_Container.h"
#include "Out_Transport.h"
#include "Transport_Travel_time.h"

void Out_Container(Container* Head, ofstream& ofst) {
    ofst << "Container contains " << Head->Len
        << " elements." << endl << endl;

    Container* Temp = Head; //Временно указываем на адрес первого элемента

    for (int i = 0; i < Head->Len; i++) {
        ofst << i << ": ";
        Out_Transport(Temp->Cont, ofst);

        ofst << "Travel time of transport = " <<
            Transport_Travel_time(Temp->Cont) << " hours" << endl << endl;

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}