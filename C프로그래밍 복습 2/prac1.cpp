#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch1, ch2;
	printf("문자 두 개를 스페이스로 구분하여 입력하세요 = ");
	scanf("%c%c", &ch1, &ch2);
	printf("입력받은 문자는 %c와 %c입니다.\n", ch1, ch2);
	return 0;
}