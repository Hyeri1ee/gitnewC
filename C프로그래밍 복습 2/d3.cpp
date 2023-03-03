#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
//함수 매개변수 포인터 : (실습 소스)ch0502_param01.c
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
	swap(a, b); //안 바뀜
	printf("a=%d, b=%d\n", a, b);

	swap2(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	printf("\npress any key to end....");
	getchar();
	return 0;
}