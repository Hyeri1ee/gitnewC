#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ch1, ch2, ch3,g;

	printf("���ڸ� �Է��ϼ��� = ");
	scanf("%c", &ch1);
	g = getchar(); //���۸� ���

	printf("���ڸ� �Է��ϼ��� = ");
	scanf("%c", &ch2);
	g = getchar(); //���۸� ���

	printf("���ڸ� �Է��ϼ��� = ");
	scanf("%c", &ch3);
	g = getchar(); //���۸� ���

	printf("�Է��� 3���� ���ڴ� %c %c %c\n", ch1, ch2, ch3);
	return 0;
}