#include "Coin.h"

//�������������
Coin coin_init(int x, int y) {
	Coin coin1;
	coin1.x = 0;
	coin1.y = 0;

	return coin1;
}
//����
Coin coin_vvod() {
	Coin coin1;
	printf("Please, write the x-coordinate of the coin: ");
	scanf("%d", &coin1.x);
	printf("Please, write the y-coordinate of the coin: ");
	scanf("%d", &coin1.y);

	return coin1;
}
//�����
void coin_vivod(Coin coin1) {
	printf("X = %d Y = %d\n", coin1.x, coin1.y);
}
//��������� ��������� ���������
Coin coin_coord() {
	Coin coin1;
	coin1.x = rand() % 7;
	coin1.y = rand() % 7;
	return coin1;
}
