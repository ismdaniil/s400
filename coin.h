#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Coin {
public:
	int x; //���������� �
	int y; //���������� �
};
//�������������
Coin coin_init(int x, int y);
//����
Coin coin_vvod();
//�����
void coin_vivod(Coin coin1);
//��������� ������ ��������� ������
Coin coin_coord();
