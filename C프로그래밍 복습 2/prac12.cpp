#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int dan, gop;
	for (dan = 2; dan <= 9; dan++) { //´Ü
		for (gop = 1; gop <= 9; gop++) {
			printf("%dx%d=%2d ", dan, gop, dan * gop);
		}
		printf("\n");
	}
	return 0;
}