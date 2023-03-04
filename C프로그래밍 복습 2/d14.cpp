#include <stdio.h>
//함수포인터를 반환하는 함수 : (실습 소스)ch0511_fn_ptr02.c
//함수 정의
int str_cmp(char* str1, char* str2)
{
	printf("%s , %s\n", str1, str2);
}

//함수포인터를반환하는함수정의
int (*pfn(int x, int y)) (char*, char*)
{
	printf("%d , %d\n", x, y);
	return str_cmp;
}
int main(void)
{
	return 0;
}