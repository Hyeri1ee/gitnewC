#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//두 수의 최대공약수 구하기 + 유클리드 호제법 이용
int main(void) {
	int a, b,r;
	//두 수 입력 받기
	printf("두 수를 입력하세요 . \n");
	printf("첫 번째 수 : ");
	scanf("%d", &a);
	getchar();
	printf("두 번째 수 : ");
	scanf("%d", &b);
	//최대공약수 구하기
	while (b != 0) { //최대공약수가 구해질 때까지
		r = a % b;
		a = b;
		b = r;
		printf("r=%d, a=%d, b=%d\n", r, a, b);
	}
	printf("최대공약수 : %d\n", a);
	return 0;
}