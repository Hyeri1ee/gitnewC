#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�Լ� ����
void start(void);
void getInfo(int** a[][4], int b);
void stop(void);
void result(int** a[][4], int b);
int main(void)
{
	int loop;
	start();
	printf("���� ó���� �л����� ����Դϱ� : ");
	scanf("%d", &loop);
	//scores�迭 �����Ҵ�
	int** scores = (int**)malloc(sizeof(int*) * (loop+1));
	for (int i = 0; i < loop; i++) {
		scores[i] = (int*)malloc(sizeof(int) * 4);
	}

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
void getInfo(int** a, int b) {
	for (int i = 0; i < sizeof(**a) / (sizeof(int) * 4); i++) {
		printf("%d��° �л��� �й��� �Է��ϰ� Enter�� �������� : ",i+1);
		getchar();
		printf("���� ������ �Է��ϰ� Enter�� �������� : ");
		scanf("%d", &a[i]);
		getchar();
		printf("���� ������ �Է��ϰ� Enter�� �������� : ");
		scanf("%d", &a[i] + 1);
		getchar();
		printf("���� ������ �Է��ϰ� Enter�� �������� : ");
		scanf("%d", &a[i] + 2);

	}
}
void stop(void) {
	printf("-------------------------------------------------\n");
	printf("		��������� ����ó���� ����Դϴ�.		 \n");
	printf("-------------------------------------------------\n");
}
void result(int** a, int b)
{
	
}