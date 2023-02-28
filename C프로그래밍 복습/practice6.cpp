#include <stdio.h>
int main(void)
{
	//char -> unsigned char -> int -> unsigned int -> long -> unsigned long -> float -> double
	int i = 3;
	double d = 5.0;
	printf("A+1=%d\n", 'A' + 1); //66
	printf("A+1=%c\n", 'A' + 1); //B
	printf("5.0/3=%f\n", d / i); //1.666667
	printf("3/2=%d\n", i / 2); //1
	printf("10/4=%d", 10 / 4); //2
	printf("10.0/4=%f\n", 10.0 / 4); //2.500000
	return 0;
}