#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x = 10, y;
	int* px; //������ px����
	px = &x; //�����Ϳ� x�� �ּ� ����
	y = *px; //px�� �ּҷ� ���� ���� ������
	printf("x=%d\t &x=%p\n", x, &x);
	printf("px=%p\t &px=%p\t *px=%d\n", px, &px, *px);
	printf("y=%d\t &y=%p\n", y, &y);
	return 0;
}