#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Platform {
public:
	int angle; //Угол наклона платформы
	int form;  //Форма
	int colour;//Цвеь
};
//Инициализация
Platform pl_init(int a, int f, int col);
//Ввод значений структуры
Platform pl_vvod();
//Вывод значений структуры
void pl_vivod(Platform pl1);
//Случайное изменение угла наклона
int pl_rotate();
