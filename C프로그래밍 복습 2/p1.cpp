#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y);
int main(void)
{
	int x = 5,y=10,sum;
	printf("add()함수 호출 전 메인 함수 x=%d, y=%d\n", x, y); //x :5 , y : 10
	sum = add(x, y); //15
	printf("sum=%d\n", sum); //sum :15
	printf("add()함수 호출 후 메인 함수 x=%d, y=%d\n", x, y); //그대로 존재 

	return 0;
}
int add(int x, int y) {
	printf("add()함수 내부 1 x=%d, y=%d\n", x, y);
	x = x + 5;
	y = y + 5;
	printf("add()함수 내부 2 x =%d, y=%d\n", x, y);
	return (x + y);
}