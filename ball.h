#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Ball {
public:
	int x; //���������� �
	int y; //���������� �
	int colour; //����
};
//�������������
Ball ball_init(int x, int y, int col);
//����
Ball ball_vvod();
//�����
void ball_vivod(Ball ball1);
//������� ���
Ball ball_move(Ball ball1);
