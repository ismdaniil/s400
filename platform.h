#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct Platform {
public:
	int angle; //���� ������� ���������
	int form;  //�����
	int colour;//����
};
//�������������
Platform pl_init(int a, int f, int col);
//���� �������� ���������
Platform pl_vvod();
//����� �������� ���������
void pl_vivod(Platform pl1);
//��������� ��������� ���� �������
int pl_rotate();
