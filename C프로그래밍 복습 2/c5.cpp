#include <stdio.h>
int main(void)
{
	char cha[4] = "ABC"; //�迭�� ���ڿ� ���� (���߿� ���� ����)
	const char *chp = "ABC"; //�����ͷ� ���ڿ� ���� (���߿� ���� �Ұ�)
	printf("cha[0] : %p=%c %c\n", cha, cha[0], *cha);

	return 0;
}