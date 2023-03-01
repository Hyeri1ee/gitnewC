#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//윤년 판단 프로그램
int main(void)
{
	int year;
	printf("연도 입력하세요 : ");
	scanf("%d", &year);
	printf("%d\n", year);
	if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))
		printf("%d는 윤년이다.\n", year);
	else
		printf("%d는 윤년이 아니다.\n", year);
	return 0;
}