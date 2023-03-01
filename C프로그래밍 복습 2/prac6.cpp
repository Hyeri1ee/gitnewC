#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score = 92;
	if (score >= 90 && score < 95) //90이상 95 미만이면 A 출력
		printf("A\n");
	return 0;
}