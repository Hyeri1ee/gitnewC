#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
* �ڷ����� ũ�� ���
*/
int main(void)
{
	printf("char ũ�� : %dbytes \n", sizeof(char));
	printf("int ũ�� : %dbytes \n", sizeof(int));
	printf("int max : %d, int min : %d \n", INT_MAX, INT_MIN);
	printf("unsigned int max : %u \n", UINT_MAX);
	printf("short ũ�� : %dbytes \n", sizeof(short));
	printf("short max : %d, short min : %d \n", SHRT_MAX, SHRT_MIN);
	printf("unsigned short max : %u \n", USHRT_MAX);
	printf("long ũ�� : %dbytes \n", sizeof(long));
	printf("double ũ�� : %dbytes \n", sizeof(double));
	printf("double max : %g, double min %g \n", DBL_MAX, DBL_MIN);
	printf("long double ũ�� : %dbytes \n", sizeof(long double));
	return 0;
}