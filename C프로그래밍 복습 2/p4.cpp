#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수 선언
void start(void);
void getInfo(int a[][3], int b);
void stop(void);
void result(int a[][3], int b);
int main(void)
{
	int loop;
	int scores[50][3]; //50 : 나중에 동적 배열로 바꿔야 함
	start();
	printf("성적 처리할 학생들이 몇명입니까 : ");
	scanf("%d", &loop);
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
void getInfo(int a[][3], int b) {
	for (int i = 0; i < sizeof(a) / (sizeof(int) * 3); i++) {
		printf("%d번째 학생의 학번을 입력하고 Enter를 누르세요 : ",i+1);
		getchar();
		printf("국어 점수를 입력하고 Enter를 누르세요 : ");
		scanf("%d", &a[0] + i);
		printf("국어 점수를 입력하고 Enter를 누르세요 : ");
		scanf("%d", &a[0] + i);

	}
}
void stop(void) {
	printf("-------------------------------------------------\n");
	printf("		등수순으로 성적처리한 결과입니다.		 \n");
	printf("-------------------------------------------------\n");
}