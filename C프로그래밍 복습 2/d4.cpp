#include <stdio.h>
//�����Ϳ� �迭 : (�ǽ� �ҽ�) ch0503_array01.c
int main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pa;
	int x, i;

	pa = &a[0]; //�迭 a�� ù��° �ּ�
	x = *pa;
	printf("pa=%x, *pa=%d, x=%d\n", pa, *pa, x);

	pa = a; //�迭 a�� �����ּ�(&a[0]�� ����)
	x = *pa;
	printf("pa=%x, *pa=%d, x=%d\n", pa, *pa, x);

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d\n",*(a+i));
	}printf("\n");


	return 0;
}