#ifndef TRAIN_H
#define TRAIN_H

#include "Key.h"

//Структура "поезд"
struct Train {
	Key K; //Идентификатор транспорта
	int Speed; //Скорость
	int Distance; //Расстояние м/у пунктами отправления и назначения
	int Сars_amount; //Число вагонов
};

#endif // TRAIN_H