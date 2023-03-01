#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Four(int, int, int*, int*, int*, double*);
int main(void)
{
	int a, b;
	int sum, sub, mul;
	double div;

	printf("사칙연산을 하고 싶은 두 정수 입력 : ");
	scanf("%d %d", &a, &b);
	Four(a, b, &sum, &sub, &mul, &div);
	printf("두 정수 %d와 %d의\n", a, b);
	printf("합 : %d 차 : %d 곱 : %d 나눗셈 : %f 입니다.\n",sum,sub,mul,div);
	return 0;
}
void Four(int a, int b, int* psum, int* psub, int* pmul, double* pdiv)
{
	*psum = a + b;
	*psub = a - b;
	*pmul = a * b;
	*pdiv = (double)a / b;
}