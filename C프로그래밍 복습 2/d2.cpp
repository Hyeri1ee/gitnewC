#include <stdio.h>
//������ ���� : (�ǽ� �ҽ�)ch0501_ptr01.c 
int main(void)
{
	int x = 1, y = 2;
	int z[7] = { 1,2,3,4,5,6,7 };
	int* ip;
	int i;
	//���� x�� y�� �ּ����
	printf("addr : %x, %x\n", &x, &y);
	//������ �迭 z�� �ּ����
	for (i = 0; i < 7; i++)
		printf("%x, ",& z[i]);
	printf("\n");

	ip = &x; //ip�� x�� ����Ų��
	y = *ip; //y�� 1�� �ȴ�.
	*ip = 0; //x�� 0�� �ȴ�
	printf("ip=%x, x=%d, y=%d'n", ip, x, y);

	ip = &z[0]; //ip�� z[0]�� ����Ų��
	*ip = *ip + 10; //z[0]�� ���� 10�� ���Ѵ�
	y = *ip + 1; //y�� ���� *ip���� 1�� ���� ���� �ȴ�
	printf("ip=%x, x=%d, y=%d'n", ip, x, y);

	*ip += 1;
	x = ++ * ip; //x�� *ip���� 1�� ���� ���� �ȴ�
	printf("ip=%x, x=%d, y=%d\n", ip, x, y);

	x = *ip++; //ip�ּҸ� ������Ų��
	y = (*ip)++; //*ip���� ������Ų��
	printf("ip=%x, x=%d, y=%d\n", ip, x, y);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}