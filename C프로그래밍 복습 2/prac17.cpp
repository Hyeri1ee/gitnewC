#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
//��ü ���α׷�2 (���ȭ ����)
//�Լ� ����
void Start(void);
int MAX(int a, int b);
int MIN(int a, int b);
int main(void) {
	int i, num, sum = 0, total, max = INT_MIN, min = INT_MAX;
	
	Start(); //�Լ� ȣ��

	printf("����Ϸ��� ���� �� ���Դϱ�?=");
	scanf("%d", &total);
	for (i = 1; i <= total; i++) {
		printf("%d��° ���� �Է��ϼ���=", i);
		scanf("%d", &num);
		sum += num;
		max = (num > max) ? num : max;
		min = (num < min) ? num : min;

	}
	printf("�� : %d ��� : %g �ִ밪 : %d �ּҰ� : %d\n", sum, (double)sum / total, max, min);
	return 0;
}
void Start(void) {
	printf("-----------------------------------------------------------------\n");
	printf("| ������ ������ ���� ��, ���, �ִ밪, �ּҰ��� ���ϴ� ���α׷� |\n");
	printf("-----------------------------------------------------------------\n");
}
int MAX(int a, int b) {
	return ((a > b) ? a : b);
}
int MIN(int a, int b) {
	return ((a < b) ? a : b);
}