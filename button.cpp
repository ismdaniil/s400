#include "Button.h"

//�������������
Button button_init(bool f) {
	Button but1;
	but1.f = f;
	return but1;
}
//�����
void button_vivod(Button but1) {
	if (but1.f == 0)
		printf("\n\nButton NOT pressed\n");
	else
		printf("\n\nButton pressed\n");
}
//������ �� ������
Button button_press(Button but1) {
	if (but1.f == 0)
		but1.f = 1;
	else
		but1.f = 0;
	return but1;
}
