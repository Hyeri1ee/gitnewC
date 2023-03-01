#include <stdio.h>
//2차원 배열 주소로 값 가져오기
int main(void) {
	int a[2][3] = { 1,2,3,4,5,6 };
	int i, j;
	printf("%d %d %d %d\n", a[1][2], *(a[1] + 2), (*(a + 1))[2], *(*(a + 1) + 2));
	return 0;
}