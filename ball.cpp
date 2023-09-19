#include "ball.h"

//Инициализация
Ball ball_init(int x, int y, int col) {
	Ball ball1;
	ball1.x = x;
	ball1.y = y;
	ball1.colour = col;

	return ball1;
}
//Ввод
Ball ball_vvod() {
	Ball ball1;
	printf("Please, write the x-coordinate of the ball: ");
	scanf("%d", &ball1.x);
	printf("Please, write the y-coordinate of the ball: ");
	scanf("%d", &ball1.y);
	printf("Please, write the colour of the ball (1 - white, 2 - red, 3 - blue): ");
	scanf("%d", &ball1.colour);

	return ball1;
}
//Вывод
void ball_vivod(Ball ball1) {
	printf("\nBall data:\n\n X = %d\n Y = %d", ball1.x, ball1.y);
	if (ball1.colour == 1)
		printf("\n Colour - white\n");
	if (ball1.colour == 2)
		printf("\n Colour - red\n");
	if (ball1.colour == 3)
		printf("\n Colour - blue\n");
}
//Сделать шаг
Ball ball_move(Ball ball1) {
	printf("Press \n  'D' to increase the x value \n  'A' to decrease the x value\n  'W' to increase the y value\n  'S' to decrease the y value\n");
	char key = _getch();
	if (key == 'a')
		ball1.x--;
	if (key == 'd')
		ball1.x++;
	if (key == 'w')
		ball1.y++;
	if (key == 's')
		ball1.y--;

	return ball1;
}
