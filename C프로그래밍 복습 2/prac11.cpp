#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, sum = 0, total; //�����ϴ� ���� sum�� �ݵ�� �ʱ�ȭ
	printf("������ ���� ����� ���ϴ� ���α׷��Դϴ�.\n");
	printf("����Ϸ��� ���� �� ���Դϱ� == ");
	scanf("%d", &total);

	for (i = 1; i <= total; i++) {
		printf("%d��° ���� �Է��ϼ��� : ",i);
		scanf("%d", &num);
		sum += num;
	}
	printf("���� %d, ����� %lf �Դϴ�.\n", sum, (double)sum / total);
	return 0;
}