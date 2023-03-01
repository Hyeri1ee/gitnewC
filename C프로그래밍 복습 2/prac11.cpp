#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, sum = 0, total; //누적하는 변수 sum은 반드시 초기화
	printf("임의의 수의 평균을 구하는 프로그램입니다.\n");
	printf("계산하려는 수는 몇 개입니까 == ");
	scanf("%d", &total);

	for (i = 1; i <= total; i++) {
		printf("%d번째 수를 입력하세요 : ",i);
		scanf("%d", &num);
		sum += num;
	}
	printf("합은 %d, 평균은 %lf 입니다.\n", sum, (double)sum / total);
	return 0;
}