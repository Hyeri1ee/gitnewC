#include <stdio.h>
//ASCII �ڵ� ǥ�� ����ϴ� ���α׷�
int main(void)
{
	int i;
	for (i = 0; i < 128; i++)
		printf("%d = %c\t", i, i);
	return 0;
}