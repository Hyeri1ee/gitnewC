#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//���� �޸� �Ҵ� : int
int main(void)
{
	int* pi;
	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {
		printf("�޸��Ҵ��� ���� �ʾҽ��ϴ�.");
		exit(1);
	}
	*pi = 200;
	printf("�޸𸮿� �Ҵ�� ���� %d �Դϴ�.\n", *pi);
	free(pi);
	return 0;
}