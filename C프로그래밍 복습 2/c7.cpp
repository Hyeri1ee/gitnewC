#include <stdio.h>
#include <string.h>
int main(void)
{
	const char* s1 = "ABC";
	const char* s2 = "ABD";
	const char* s3 = "abd";

	int a, b, c, d, e;

	a = strcmp(s1, s2); //s1 > s2 ? +1 : -1
	b = strcmp(s1, s3);
	c = strncmp(s1, s2, 2); //처음 2개만 비교
	d = _stricmp(s1, s3); //대소문 구분없이 비교
	e = _strnicmp(s1, s3, 2); //대소문 구분없이 처음 2개만 비교
	printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
	return 0;
}