#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� �Ǵ� ���α׷�
int main(void)
{
	int year;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &year);
	printf("%d\n", year);
	if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))
		printf("%d�� �����̴�.\n", year);
	else
		printf("%d�� ������ �ƴϴ�.\n", year);
	return 0;
}