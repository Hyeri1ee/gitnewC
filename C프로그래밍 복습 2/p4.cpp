#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ� ����
void start(void);
void getInfo(int a[][3], int b);
void stop(void);
void result(int a[][3], int b);
int main(void)
{
	int loop;
	int scores[50][3]; //50 : ���߿� ���� �迭�� �ٲ�� ��
	start();
	printf("���� ó���� �л����� ����Դϱ� : ");
	scanf("%d", &loop);
	getInfo(scores, loop);
	stop();
	result(scores, loop);
	return 0;
}
void start(void) {
	printf("-------------------------------------------------\n");
	printf("			���� ó�� ���α׷��Դϴ�.			 \n");
	printf("-------------------------------------------------\n");
}
void getInfo(int a[][3], int b) {
	for (int i = 0; i < sizeof(a) / (sizeof(int) * 3); i++) {
		printf("%d��° �л��� �й��� �Է��ϰ� Enter�� �������� : ",i+1);
		getchar();
		printf("���� ������ �Է��ϰ� Enter�� �������� : ");
		scanf("%d", &a[0] + i);
		printf("���� ������ �Է��ϰ� Enter�� �������� : ");
		scanf("%d", &a[0] + i);

	}
}
void stop(void) {
	printf("-------------------------------------------------\n");
	printf("		��������� ����ó���� ����Դϴ�.		 \n");
	printf("-------------------------------------------------\n");
}