#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[10];
	printf("당신의 이름을 입력하세요 =");
	scanf("%s", name);
	printf("당신의 이름은 %s입니다.\n", name);
	return 0;
}