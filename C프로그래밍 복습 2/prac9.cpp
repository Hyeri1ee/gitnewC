#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch;
	printf("키보드로 키 하나를 입력하세요 : ");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') printf("영어 소문자 입니다.\n");
	else printf("영어 소문자가 아닙니다.\n");
	return 0;
}