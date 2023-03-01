#include <stdio.h>
#define AA 2 //매크로 상수
#define sum3(i,j,k)  ((i)+(j)+(k)) //매크로 함수
int main(void) {
	printf("%d\n", sum3(AA, 4, 6));
	printf("%d\n", sum3(AA, 4, 6) / 2);
	printf("%d\n", AA);
	return 0;
}