#include <stdio.h>
//구조체 안에 구조체가 멤버로
typedef struct BIRTH {
	int y, m, d;
}birth;
typedef struct PERSON {
	char name[10];
	birth day; //birth라는 구조체형을 멤버로 포함
}person;
int main(void)
{
	person man = { "하니",{98,2,19} };
	printf("%s \n", man.name);
	printf("%d %d %d\n", man.day.y, man.day.m, man.day.d);
	return 0;
}