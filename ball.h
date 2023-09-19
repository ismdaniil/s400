#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Ball {
public:
	int x; //Координата х
	int y; //Координата у
	int colour; //Цвет
};
//Инициализация
Ball ball_init(int x, int y, int col);
//Ввод
Ball ball_vvod();
//Вывод
void ball_vivod(Ball ball1);
//Сделать шаг
Ball ball_move(Ball ball1);
