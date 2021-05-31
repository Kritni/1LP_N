#include "Transport_Travel_time.h"

double Transport_Travel_time(Transport* T) {
	if (T->K == AIRPLANE || T->K == TRAIN) {
		return (double)T->Distance / (double)T->Speed;
	}
	else {
		return -1;
	}
}