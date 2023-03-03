#include <stdio.h>
//포인터와 배열 : (실습 소스) ch0503_array01.c
int main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pa;
	int x, i;

	pa = &a[0]; //배열 a의 첫번째 주소
	x = *pa;
	printf("pa=%x, *pa=%d, x=%d\n", pa, *pa, x);

	pa = a; //배열 a의 시작주소(&a[0]와 동일)
	x = *pa;
	printf("pa=%x, *pa=%d, x=%d\n", pa, *pa, x);

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d\n",*(a+i));
	}printf("\n");


	return 0;
}