#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
//�Լ� �Ű����� ������ : (�ǽ� �ҽ�)ch0502_param01.c
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void swap2(int* px, int* py) {
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
int main(void)
{
	int a = 10, b = 20;
	swap(a, b); //�� �ٲ�
	printf("a=%d, b=%d\n", a, b);

	swap2(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	printf("\npress any key to end....");
	getchar();
	return 0;
}