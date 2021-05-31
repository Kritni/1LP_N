#include "Transport_Travel_time.h"

double Transport_Travel_time(Transport* T) {
	if (T->K == AIRPLANE || T->K == TRAIN || T->K == SHIP) {
		return (double)T->Distance / (double)T->Speed;
	}
	else {
		return -1;
	}
}