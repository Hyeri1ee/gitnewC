#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch;
	printf("Ű����� Ű �ϳ��� �Է��ϼ��� : ");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') printf("���� �ҹ��� �Դϴ�.\n");
	else printf("���� �ҹ��ڰ� �ƴմϴ�.\n");
	return 0;
}