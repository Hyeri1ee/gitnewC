#include <stdio.h>
//문자포인터와 함수 : (실습소스) ch0505_str01.c
//문자열 복사(배열 사용)
void strcpy1(char* s, char* t)
{
	int i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}
//문자열 복사(포인터사용)
void strcpy2(char* s, char* t)
{
	int i = 0;
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}
//문자열 복사(포인터사용, 함축)
void strcpy3(char* s, char* t)
{
	while ((*s++ = *t++));
}
int main(void)
{

	char amessage1[] = "a1 : Now is the time"; //배열
	char amessage2[] = "a2 : Now is the time"; //배열
	const char* pmessage = "p : Now is the time"; //포인터

	amessage1[14] = 'T';
	amessage1[15] = 'I';
	amessage1[16] = 'M';
	amessage1[17] = 'E';
	printf("%s\n", amessage1);
	printf("%s\n", amessage2);
	printf("%s\n", pmessage);

	pmessage = amessage2;
	printf("%s\n", pmessage);

	strcpy1(amessage2, amessage1);
	printf("%s\n", amessage2);


	return 0;
}