#include <stdio.h>
//�������� ���� : (�ǽ� �ҽ�)ch0501_ptr02.c
int main(void)
{
	int ia[7] = { 1,2,3,4,5,6,7 };
	char ca[7] = "string";
	double da[7] = { 1,2,3,4,5,6,7 };
	void* ptr;
	int i;

	//int�� �迭 ia�� �ּ����
	for (i = 0; i < 7; i++)
	{
		printf("%x, ", &ia[i]);
	}printf("\n");
	//char�� �迭 ca�� �ּ����
	for (i = 0; i < 7; i++)
	{
		printf("%x, ", &ca[i]);
	}printf("\n");
	//double�� �迭 da�� �ּ����
	for (i = 0; i < 7; i++)
	{
		printf("%x, ", &da[i]);
	}printf("\n");

	//int���� ����Ű�� ������
	ptr = (int*)ia;
	ptr = (int*)ptr + 1; //�ּ� +1
	printf("ptr=%x, data=%d\n", (int*)ptr, *(int*)ptr);

	//char���� ����Ű�� ������
	ptr = (char*)ca;
	ptr = (char*)ptr + 1;
	printf("ptr=%x, data=%c\n", (int*)ptr, *(int*)ptr);

	//double���� ����Ű�� ������
	ptr = (double*)da;
	ptr = (double*)ptr + 1;
	printf("ptr=%x, data=%lf\n", (double*)ptr, *(double*)ptr);
	return 0;
}