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
	c = strncmp(s1, s2, 2); //ó�� 2���� ��
	d = _stricmp(s1, s3); //��ҹ� ���о��� ��
	e = _strnicmp(s1, s3, 2); //��ҹ� ���о��� ó�� 2���� ��
	printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
	return 0;
}