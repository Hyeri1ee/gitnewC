#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct st {
	char hakbun[12];		//����ü �й�
	char name[10];			//�̸�
	int kor, eng, math, tot;//����,����,����,�հ�
	double avg;				//���
}ST;
void printinfo1(void);
void printinfo2(void);
void printinfo3(ST s[],int n);
int main(void)
{
	ST temp;
	int i;
	int num;			//���� ó���� �л� ��
	ST students[100];	//����ü ST�� �迭 ����

	printinfo1();
	printf("���� ó���� �л����� ����Դϱ�== ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("%d��° �л��� �й��� �Է��ϰ� Enter�� ��������= ",(i+1));	//�й� �Է�
		scanf("%s", students[i].hakbun);
		printf("%d��° �л��� �̸��� �Է��ϰ� Enter�� ��������= ", (i + 1));//�̸� �Է�
		scanf("%s", students[i].name);
		printf("���� ������ �Է��ϰ� Enter�� ��������= ");//���� ���� �Է�
		scanf("%d", &students[i].kor);
		printf("���� ������ �Է��ϰ� Enter�� ��������= ");//���� ���� �Է�
		scanf("%d", &students[i].eng);
		printf("���� ������ �Է��ϰ� Enter�� ��������= ");//���� ���� �Է�
		scanf("%d", &students[i].math);
	}

	printinfo2();
	for (i = 0; i < num; i++)
	{
		students[i].tot = (students[i].kor + students[i].eng + students[i].math);	//tot ��� ����
	}

	//���� ���� (������ ���� ��)
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
	//��� ���� ������ ���
	printinfo3(students,num);
	return 0;
}
void printinfo1(void)
{
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("						���� ó�� ���α׷��Դϴ�.         \n");
	printf("----------------------------------------------------------------------------------------------------------\n");
}
void printinfo2(void)
{
	printf("				   ���� ó��<�����>									       		\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("�й�			�̸�		����		����		����		����		���\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
}
void printinfo3(ST s[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s			%s		%d		%d		%d		%d		%4.2f\n", s[i].hakbun, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].tot, s[i].tot / 3.0);
	}
	
}
