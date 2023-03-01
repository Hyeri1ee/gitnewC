#include <stdio.h>
int main(void)
{
	char cha[4] = "ABC"; //배열로 문자열 정의 (나중에 수정 가능)
	const char *chp = "ABC"; //포인터로 문자열 정의 (나중에 수정 불가)
	printf("cha[0] : %p=%c %c\n", cha, cha[0], *cha);

	return 0;
}