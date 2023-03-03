#include <stdio.h>
//포인터의 기초 : (실습 소스)ch0501_ptr02.c
int main(void)
{
	int ia[7] = { 1,2,3,4,5,6,7 };
	char ca[7] = "string";
	double da[7] = { 1,2,3,4,5,6,7 };
	void* ptr;
	int i;

	//int형 배열 ia의 주소출력
	for (i = 0; i < 7; i++)
	{
		printf("%x, ", &ia[i]);
	}printf("\n");
	//char형 배열 ca의 주소출력
	for (i = 0; i < 7; i++)
	{
		printf("%x, ", &ca[i]);
	}printf("\n");
	//double형 배열 da의 주소출력
	for (i = 0; i < 7; i++)
	{
		printf("%x, ", &da[i]);
	}printf("\n");

	//int형을 가르키는 포인터
	ptr = (int*)ia;
	ptr = (int*)ptr + 1; //주소 +1
	printf("ptr=%x, data=%d\n", (int*)ptr, *(int*)ptr);

	//char형을 가르키는 포인터
	ptr = (char*)ca;
	ptr = (char*)ptr + 1;
	printf("ptr=%x, data=%c\n", (int*)ptr, *(int*)ptr);

	//double형을 가르키는 포인터
	ptr = (double*)da;
	ptr = (double*)ptr + 1;
	printf("ptr=%x, data=%lf\n", (double*)ptr, *(double*)ptr);
	return 0;
}