#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�� ���� �ִ����� ���ϱ� + ��Ŭ���� ȣ���� �̿�
int main(void) {
	int a, b,r;
	//�� �� �Է� �ޱ�
	printf("�� ���� �Է��ϼ��� . \n");
	printf("ù ��° �� : ");
	scanf("%d", &a);
	getchar();
	printf("�� ��° �� : ");
	scanf("%d", &b);
	//�ִ����� ���ϱ�
	while (b != 0) { //�ִ������� ������ ������
		r = a % b;
		a = b;
		b = r;
		printf("r=%d, a=%d, b=%d\n", r, a, b);
	}
	printf("�ִ����� : %d\n", a);
	return 0;
}