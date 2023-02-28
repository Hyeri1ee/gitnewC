#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
* 자료형의 크기 출력
*/
int main(void)
{
	printf("char 크기 : %dbytes \n", sizeof(char));
	printf("int 크기 : %dbytes \n", sizeof(int));
	printf("int max : %d, int min : %d \n", INT_MAX, INT_MIN);
	printf("unsigned int max : %u \n", UINT_MAX);
	printf("short 크기 : %dbytes \n", sizeof(short));
	printf("short max : %d, short min : %d \n", SHRT_MAX, SHRT_MIN);
	printf("unsigned short max : %u \n", USHRT_MAX);
	printf("long 크기 : %dbytes \n", sizeof(long));
	printf("double 크기 : %dbytes \n", sizeof(double));
	printf("double max : %g, double min %g \n", DBL_MAX, DBL_MIN);
	printf("long double 크기 : %dbytes \n", sizeof(long double));
	return 0;
}