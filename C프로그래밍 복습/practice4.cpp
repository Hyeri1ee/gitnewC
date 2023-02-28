#include <stdio.h>
#include <limits.h>
int main(void)
{
	printf("%u\n", UINT_MAX); //unsigned int 형식지정자 %u
	int x = 2147483647; //int형으로 저장할 수 있는 최대 값
	int y = -2147483648; //int형으로 저장할 수 있는 최소 값
	printf("%d\n", x);
	printf("%d\n", x + 1); //overflow
	printf("%d\n", y);
	printf("%d\n", y - 1); //underflow

	return 0;
}