#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[100][20];
	int i = 0, j;

	do {
		printf("�̸��� �Է�('��'�� �Է��ϸ� ����) : ");
		scanf("%s", name[i]); //%s : name[i]�� ����Ű�� �ּҰ����� ����� �����Ͽ�, null���� ������ ����
		if (strcmp(name[i], "��") == 0) break;
		i++;
	} while (1);

	for (j = 0; j < i; j++) printf("%s\n", name[j]);
	return 0;
}