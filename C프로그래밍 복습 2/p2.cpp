#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COUNT 5
//���� ����
int main(void) {
	int i, j, num[COUNT], temp;

	for (i = 0; i < COUNT; i++) {
		printf("%d��° ���� �Է��ϰ�, Enter�� �������� :", i + 1);
		scanf("%d",& num[i]);
	}
	for (i = 0; i < COUNT - 1; i++) { //���� ����
		for (j = i + 1; j < COUNT; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (i = 0; i < COUNT; i++) {
		printf("%d", num[i]);
	}
	return 0;
}