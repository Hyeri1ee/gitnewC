#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x = 10, y;
	int* px; //포인터 px선언
	px = &x; //포인터에 x의 주소 대입
	y = *px; //px의 주소로 가서 값을 가져옴
	printf("x=%d\t &x=%p\n", x, &x);
	printf("px=%p\t &px=%p\t *px=%d\n", px, &px, *px);
	printf("y=%d\t &y=%p\n", y, &y);
	return 0;
}