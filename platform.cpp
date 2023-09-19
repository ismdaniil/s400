#include "platform.h"

//Инициализация
Platform pl_init(int a, int f, int col) {
	Platform pl1;
	pl1.angle = a;
	pl1.form = f;
	pl1.colour = col;

	return pl1;
}
//Ввод
Platform pl_vvod() {
	Platform pl1;
	printf("Please, write the angle of rotation of the platform: ");
	scanf("%d", &pl1.angle);
	printf("Please, write the form of the platform (1 - triangle, 2 - circle): ");
	scanf("%d", &pl1.form);
	printf("Please, write the colour of the platform (1 - white, 2 - red, 3 - blue): ");
	scanf("%d", &pl1.colour);

	return pl1;
}
//Вывод
void pl_vivod(Platform pl1) {
	printf("\nPlatform data:\n\n Angle = %d\n", pl1.angle);
	if (pl1.form == 1)
		printf(" Form - triangle\n");
	if (pl1.form == 2)
		printf(" Form - circle\n");
	if (pl1.colour == 1)
		printf(" Colour - white\n");
	if (pl1.colour == 2)
		printf(" Colour - red\n");
	if (pl1.colour == 3)
		printf(" Colour - blue\n");
}
//Изменение угла наклона платформы
int pl_rotate() {
	Platform pl1;
	pl1.angle = rand() % 15;
	return pl1.angle;
}
