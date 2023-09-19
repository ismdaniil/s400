#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

#include "Coin.h"

struct Rating {
public:
	int i;    //Значение рейтинга
	Coin c[5];//Собранные монеты
};
//Инициализация
Rating rat_init(int i, Coin mas_c[5]);
//Вывод
void rat_vivod(Rating rat1);
//Увеличение рейтинга
int rat_plus(Rating rat1);
