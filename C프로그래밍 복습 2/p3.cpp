#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input(int num[], int loop); //함수 선언
int main(void) {
	int num[5];
	int i, sum = 0;

	input(num, 5);

	for (i = 0; i < 5; i++)  sum = sum + num[i];
	printf("입력받은 숫자의 평균은 %5.2f 입니다.\n", sum / 5.0);

	return 0;
}
void input(int in[], int loop) {
	int i;
	printf("5개의 수를 입력받아 평균을 구하는 프로그램\n");
	for (i = 0; i < loop; i++) {
		printf("%d번째 수를 입력하세요=>", i + 1);
		scanf("%d", &in[i]);
	}
}