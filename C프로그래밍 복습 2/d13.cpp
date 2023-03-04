#include <stdio.h>
//포인터배열과 다차원배열
//ch0509_parray01.c
int main(void)
{
	int a[10][20];
	int* b[10];
	int i, row;

	char aname[][15] = { "illegal month","jan","feb","mar" }; //2차원배열
	const char* pname[] = { "illegal month","jan","feb","mar" }; //포인터배열

	printf("size of a=%u, b=%u\n", sizeof(a), sizeof(b));
	printf("size of aname=%u, pname=%u\n", sizeof(aname), sizeof(pname));

	row = sizeof(aname) / sizeof(aname[0]);
	//aname 각각의 요소크기와 주소출력
	for (i = 0; i < row; i++)
	{
		printf("%u(%x)%x,  ", sizeof(aname[i]), &aname[i], &aname[i][0]);
	}printf("\n");
	return 0;
}