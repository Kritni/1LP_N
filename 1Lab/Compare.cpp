#include "Compare.h"
#include "Transport_Travel_time.h"

bool Compare(Transport* First, Transport* Second) {
    return Transport_Travel_time(First) > Transport_Travel_time(Second);
}