#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Four(int, int, int*, int*, int*, double*);
int main(void)
{
	int a, b;
	int sum, sub, mul;
	double div;

	printf("��Ģ������ �ϰ� ���� �� ���� �Է� : ");
	scanf("%d %d", &a, &b);
	Four(a, b, &sum, &sub, &mul, &div);
	printf("�� ���� %d�� %d��\n", a, b);
	printf("�� : %d �� : %d �� : %d ������ : %f �Դϴ�.\n",sum,sub,mul,div);
	return 0;
}
void Four(int a, int b, int* psum, int* psub, int* pmul, double* pdiv)
{
	*psum = a + b;
	*psub = a - b;
	*pmul = a * b;
	*pdiv = (double)a / b;
}