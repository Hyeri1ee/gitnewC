#include <stdio.h>
void print(void);
int main(void)
{
	void (*view) (void); //�Լ� ������ ����
	view = print; //�Լ� �����Ϳ� print()�Լ��� �ּҰ��� ����
	view(); //print() �� ȣ���ϴ� �Ͱ� ����
	return 0;
}
void print(void) {
	printf("���� print �Լ��Դϴ�.\n");
}