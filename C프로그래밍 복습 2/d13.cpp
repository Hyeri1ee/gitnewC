#include <stdio.h>
//�����͹迭�� �������迭
//ch0509_parray01.c
int main(void)
{
	int a[10][20];
	int* b[10];
	int i, row;

	char aname[][15] = { "illegal month","jan","feb","mar" }; //2�����迭
	const char* pname[] = { "illegal month","jan","feb","mar" }; //�����͹迭

	printf("size of a=%u, b=%u\n", sizeof(a), sizeof(b));
	printf("size of aname=%u, pname=%u\n", sizeof(aname), sizeof(pname));

	row = sizeof(aname) / sizeof(aname[0]);
	//aname ������ ���ũ��� �ּ����
	for (i = 0; i < row; i++)
	{
		printf("%u(%x)%x,  ", sizeof(aname[i]), &aname[i], &aname[i][0]);
	}printf("\n");
	return 0;
}