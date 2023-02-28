#include <stdio.h>
//%d 형지정 문자와 함께 사용한 플래그, 문자, 폭 정렬 결과
int main(void)
{
	printf("123456789012345678901234\n");
	printf("%d%d%d\n", 100, -200, 300);
	printf("%d %d %d\n", 100, -200, 300);
	printf("%-8d%-8d%-8d\n", 100, -200, 300);
	printf("%+8d%8d%8d\n", 100, -200, 300);
	printf("%5d,%05d\n", 100, 100);
	return 0;
}