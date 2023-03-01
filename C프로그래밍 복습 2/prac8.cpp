#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 2, j = 4, min;
	min = (i < j) ? i : j;
	printf("%d\n", min);

	return 0;
}