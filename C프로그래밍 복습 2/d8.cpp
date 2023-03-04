#include <stdio.h>
//���������Ϳ� �Լ� : (�ǽ��ҽ�) ch0505_str01.c
//���ڿ� ����(�迭 ���)
void strcpy1(char* s, char* t)
{
	int i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}
//���ڿ� ����(�����ͻ��)
void strcpy2(char* s, char* t)
{
	int i = 0;
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}
//���ڿ� ����(�����ͻ��, ����)
void strcpy3(char* s, char* t)
{
	while ((*s++ = *t++));
}
int main(void)
{

	char amessage1[] = "a1 : Now is the time"; //�迭
	char amessage2[] = "a2 : Now is the time"; //�迭
	const char* pmessage = "p : Now is the time"; //������

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