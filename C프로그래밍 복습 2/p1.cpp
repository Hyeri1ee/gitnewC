#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y);
int main(void)
{
	int x = 5,y=10,sum;
	printf("add()�Լ� ȣ�� �� ���� �Լ� x=%d, y=%d\n", x, y); //x :5 , y : 10
	sum = add(x, y); //15
	printf("sum=%d\n", sum); //sum :15
	printf("add()�Լ� ȣ�� �� ���� �Լ� x=%d, y=%d\n", x, y); //�״�� ���� 

	return 0;
}
int add(int x, int y) {
	printf("add()�Լ� ���� 1 x=%d, y=%d\n", x, y);
	x = x + 5;
	y = y + 5;
	printf("add()�Լ� ���� 2 x =%d, y=%d\n", x, y);
	return (x + y);
}