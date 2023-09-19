#include "Rating.h"

//Инициализация
Rating rat_init(int i, Coin mas_c[5]) {
	Rating rat1;
	int j;
	rat1.i = i;
	for (j = 0; j < 5; j++)
		rat1.c[j] = mas_c[j];
	return rat1;
}
//Вывод
void rat_vivod(Rating rat1) {
	int j;
	printf("\nRating: %d\n", rat1.i);
	printf("\nCollected coins:\n\n");
	for (j = 0; j < 5; j++)
		coin_vivod(rat1.c[j]);
}
//Увеличение значения рейтинга
int rat_plus(Rating rat1) {
	rat1.i++;
	return rat1.i;
}
