#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("%u\n", UINT_MAX); //unsigned int ���������� %u
	int x = 2147483647; //int������ ������ �� �ִ� �ִ� ��
	int y = -2147483648; //int������ ������ �� �ִ� �ּ� ��
	printf("%d\n", x);
	printf("%d\n", x + 1); //overflow
	printf("%d\n", y);
	printf("%d\n", y - 1); //underflow

	return 0;
}