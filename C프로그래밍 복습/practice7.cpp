#include <stdio.h>
//열거형 활용
int main(void)
{
	enum days {sun,mon,tue,wed,thur=7,fri,sat}a1,a2,a6;
	enum days a8;

	a8 = sun; //0
	a1 = sun;//0
	a2 = mon;//1
	a6 = fri;//8
	printf("a1=%d, a6=%d, a8=%d\n", a1, a6, a8);
	return 0;
}