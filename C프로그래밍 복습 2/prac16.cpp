#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
//전체 프로그램1
int main(void) {
	int i, num, sum = 0, total, max = INT_MIN, min = INT_MAX;
	printf("-----------------------------------------------------------------\n");
	printf("| 임의의 개수의 수의 합, 평균, 최대값, 최소값을 구하는 프로그램 |\n");
	printf("-----------------------------------------------------------------\n");
	printf("계산하려는 수는 몇 개입니까?=");
	scanf("%d", &total);
	for (i = 1; i <= total; i++) {
		printf("%d번째 수를 입력하세요=", i);
		scanf("%d",&num);
		sum += num;
		max = (num > max) ? num : max;
		min = (num < min) ? num : min;

	}
	printf("합 : %d 평균 : %g 최대값 : %d 최소값 : %d\n", sum, (double)sum / total, max, min);
	return 0;
}