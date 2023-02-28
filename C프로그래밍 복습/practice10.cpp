#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	printf("입력받은 수는 %d입니다.\n", num);
	return 0;
}