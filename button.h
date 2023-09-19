#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Button {
public:
	bool f; //Вкл или Выкл
};

//Инициализация
Button button_init(bool f);
//Вывод
void button_vivod(Button but1);
//Нажать на кнопку
Button button_press(Button but1);
