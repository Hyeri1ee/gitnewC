#include <stdio.h>
//������ �迭 : (�ǽ��ҽ�) ch0506_ptr_array01.c
int main(void)
{
	const char* p0 = "This is p0";
	const char* p1 = "This is p1";
	const char* p2 = "This is p2";

	const char* ptrs[3]; //������ �迭
	int i;

	//������ �����͸� �迭�� ����
	ptrs[0] = p0;
	ptrs[1] = p1;
	ptrs[2] = p2;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", ptrs[i]);
	}
	return 0;
}