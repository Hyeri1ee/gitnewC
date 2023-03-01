#include <stdio.h>
//ASCII 코드 표를 출력하는 프로그램
int main(void)
{
	int i;
	for (i = 0; i < 128; i++)
		printf("%d = %c\t", i, i);
	return 0;
}