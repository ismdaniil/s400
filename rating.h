#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

#include "Coin.h"

struct Rating {
public:
	int i;    //�������� ��������
	Coin c[5];//��������� ������
};
//�������������
Rating rat_init(int i, Coin mas_c[5]);
//�����
void rat_vivod(Rating rat1);
//���������� ��������
int rat_plus(Rating rat1);
