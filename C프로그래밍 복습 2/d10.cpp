#include <stdio.h>
//포인터 배열 : (실습소스) ch0506_ptr_array01.c
int main(void)
{
	const char* p0 = "This is p0";
	const char* p1 = "This is p1";
	const char* p2 = "This is p2";

	const char* ptrs[3]; //포인터 배열
	int i;

	//각각의 포인터를 배열에 저장
	ptrs[0] = p0;
	ptrs[1] = p1;
	ptrs[2] = p2;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", ptrs[i]);
	}
	return 0;
}