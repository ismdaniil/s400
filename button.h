#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Button {
public:
	bool f; //��� ��� ����
};

//�������������
Button button_init(bool f);
//�����
void button_vivod(Button but1);
//������ �� ������
Button button_press(Button but1);
