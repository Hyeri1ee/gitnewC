#include <stdio.h>
// 주소연산 : (실습소스) ch0504_ptr_arith02.c
int main(void)
{
	//char형을 가르키는 포인터의 차이값
	{
		char a[10];
		char* pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %2d, %x, %x\n", pa2 - pa1, pa2, pa1);
	}

	//int형을 가르키는 포인터의 차이값
	{
		int a[10];
		int* pa1, * pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %2d, %x, %x\n", pa2 - pa1, pa2, pa1);
	}

	//double형을 가르키는 포인터의 차이값
	{
		double a[10];
		double* pa1, * pa2;
		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %2d, %x, %x\n", pa2 - pa1, pa2, pa1);
	}
}