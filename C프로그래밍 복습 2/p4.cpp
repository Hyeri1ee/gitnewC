#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//함수 선언
void start(void);
void getInfo(int** a[][4], int b);
void stop(void);
void result(int** a[][4], int b);
int main(void)
{
	int loop;
	start();
	printf("성적 처리할 학생들이 몇명입니까 : ");
	scanf("%d", &loop);
	//scores배열 동적할당
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
	printf("			성적 처리 프로그램입니다.			 \n");
	printf("-------------------------------------------------\n");
}
void getInfo(int** a, int b) {
	for (int i = 0; i < sizeof(**a) / (sizeof(int) * 4); i++) {
		printf("%d번째 학생의 학번을 입력하고 Enter를 누르세요 : ",i+1);
		getchar();
		printf("국어 점수를 입력하고 Enter를 누르세요 : ");
		scanf("%d", &a[i]);
		getchar();
		printf("영어 점수를 입력하고 Enter를 누르세요 : ");
		scanf("%d", &a[i] + 1);
		getchar();
		printf("수학 점수를 입력하고 Enter를 누르세요 : ");
		scanf("%d", &a[i] + 2);

	}
}
void stop(void) {
	printf("-------------------------------------------------\n");
	printf("		등수순으로 성적처리한 결과입니다.		 \n");
	printf("-------------------------------------------------\n");
}
void result(int** a, int b)
{
	
}