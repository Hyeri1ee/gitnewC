#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct st {
	char hakbun[12];		//구조체 학번
	char name[10];			//이름
	int kor, eng, math, tot;//국어,영어,수학,합계
	double avg;				//평균
}ST;
void printinfo1(void);
void printinfo2(void);
void printinfo3(ST s[],int n);
int main(void)
{
	ST temp;
	int i;
	int num;			//성적 처리할 학생 수
	ST students[100];	//구조체 ST형 배열 선언

	printinfo1();
	printf("성적 처리할 학생들이 몇명입니까== ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("%d번째 학생의 학번을 입력하고 Enter를 누르세요= ",(i+1));	//학번 입력
		scanf("%s", students[i].hakbun);
		printf("%d번째 학생의 이름을 입력하고 Enter를 누르세요= ", (i + 1));//이름 입력
		scanf("%s", students[i].name);
		printf("국어 점수를 입력하고 Enter를 누르세요= ");//국어 점수 입력
		scanf("%d", &students[i].kor);
		printf("영어 점수를 입력하고 Enter를 누르세요= ");//영어 점수 입력
		scanf("%d", &students[i].eng);
		printf("수학 점수를 입력하고 Enter를 누르세요= ");//수학 점수 입력
		scanf("%d", &students[i].math);
	}

	printinfo2();
	for (i = 0; i < num; i++)
	{
		students[i].tot = (students[i].kor + students[i].eng + students[i].math);	//tot 멤버 정의
	}

	//선택 정렬 (총점이 높은 순)
	for (int n = 0; n < num - 1; n++)
	{
		for (int j = n + 1; j < num; j++)
		{
			if (students[n].tot < students[j].tot)
			{
				temp = students[n];
				students[n] = students[j];
				students[j] = temp;
			}
		}
	}
	//평균 높은 순으로 출력
	printinfo3(students,num);
	return 0;
}
void printinfo1(void)
{
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("						성적 처리 프로그램입니다.         \n");
	printf("----------------------------------------------------------------------------------------------------------\n");
}
void printinfo2(void)
{
	printf("				   성적 처리<등수순>									       		\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("학번			이름		국어		영어		수학		총점		평균\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
}
void printinfo3(ST s[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s			%s		%d		%d		%d		%d		%4.2f\n", s[i].hakbun, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].tot, s[i].tot / 3.0);
	}
	
}
