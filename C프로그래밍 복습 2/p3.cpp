#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input(int num[], int loop); //�Լ� ����
int main(void) {
	int num[5];
	int i, sum = 0;

	input(num, 5);

	for (i = 0; i < 5; i++)  sum = sum + num[i];
	printf("�Է¹��� ������ ����� %5.2f �Դϴ�.\n", sum / 5.0);

	return 0;
}
void input(int in[], int loop) {
	int i;
	printf("5���� ���� �Է¹޾� ����� ���ϴ� ���α׷�\n");
	for (i = 0; i < loop; i++) {
		printf("%d��° ���� �Է��ϼ���=>", i + 1);
		scanf("%d", &in[i]);
	}
}