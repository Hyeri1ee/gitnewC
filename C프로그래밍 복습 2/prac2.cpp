#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch1, ch2, ch3,g;

	printf("문자를 입력하세요 = ");
	scanf("%c", &ch1);
	g = getchar(); //버퍼를 비움

	printf("문자를 입력하세요 = ");
	scanf("%c", &ch2);
	g = getchar(); //버퍼를 비움

	printf("문자를 입력하세요 = ");
	scanf("%c", &ch3);
	g = getchar(); //버퍼를 비움

	printf("입력한 3개의 문자는 %c %c %c\n", ch1, ch2, ch3);
	return 0;
}