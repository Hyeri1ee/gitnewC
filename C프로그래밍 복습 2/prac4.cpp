#include <stdio.h>
#define AA 2 //��ũ�� ���
#define sum3(i,j,k)  ((i)+(j)+(k)) //��ũ�� �Լ�
int main(void) {
	printf("%d\n", sum3(AA, 4, 6));
	printf("%d\n", sum3(AA, 4, 6) / 2);
	printf("%d\n", AA);
	return 0;
}