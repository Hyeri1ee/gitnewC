#include <stdio.h>
//����ü �ȿ� ����ü�� �����
typedef struct BIRTH {
	int y, m, d;
}birth;
typedef struct PERSON {
	char name[10];
	birth day; //birth��� ����ü���� ����� ����
}person;
int main(void)
{
	person man = { "�ϴ�",{98,2,19} };
	printf("%s \n", man.name);
	printf("%d %d %d\n", man.day.y, man.day.m, man.day.d);
	return 0;
}