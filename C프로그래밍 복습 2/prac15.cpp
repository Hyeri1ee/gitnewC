#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��� �Լ�, �Լ� ����
int sum(int n); //�Լ� ����
int main(void) {
	int in = 3, out;
	out = sum(in); //�Լ� ȣ��
	printf("\nin=%d,out=%d\n", in, out);

	return 0;
}
int sum(int n) { //sum(n) : 1���� n������ ��
	printf("n=%d   ", n);
	if (n <= 1) return 1;
	else return (n + sum(n - 1));
}