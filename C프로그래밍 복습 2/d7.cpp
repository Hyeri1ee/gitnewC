#include <stdio.h>
// �ּҿ��� : (�ǽ��ҽ�) ch0504_ptr_arith02.c
int main(void)
{
	//char���� ����Ű�� �������� ���̰�
	{
		char a[10];
		char* pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %2d, %x, %x\n", pa2 - pa1, pa2, pa1);
	}

	//int���� ����Ű�� �������� ���̰�
	{
		int a[10];
		int* pa1, * pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %2d, %x, %x\n", pa2 - pa1, pa2, pa1);
	}

	//double���� ����Ű�� �������� ���̰�
	{
		double a[10];
		double* pa1, * pa2;
		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %2d, %x, %x\n", pa2 - pa1, pa2, pa1);
	}
}