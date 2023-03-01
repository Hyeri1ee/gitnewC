#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//재귀 함수, 함수 정의
int sum(int n); //함수 선언
int main(void) {
	int in = 3, out;
	out = sum(in); //함수 호출
	printf("\nin=%d,out=%d\n", in, out);

	return 0;
}
int sum(int n) { //sum(n) : 1부터 n까지의 합
	printf("n=%d   ", n);
	if (n <= 1) return 1;
	else return (n + sum(n - 1));
}