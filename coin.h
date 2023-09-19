#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Coin {
public:
	int x; //Координата х
	int y; //Координата у
};
//Инициализация
Coin coin_init(int x, int y);
//Ввод
Coin coin_vvod();
//Вывод
void coin_vivod(Coin coin1);
//Случайная замена координат монеты
Coin coin_coord();
