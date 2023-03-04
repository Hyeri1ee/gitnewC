#include <stdio.h>
//포인터배열 초기화 : (실습 소스)ch0508_ptr_array_init01.c
char* month_name(int n)
{
	static const char* name[] = {
		"illegal month","january","february","march",
		"april","may","june","july","august","september","october",
		"november","december"
	};

	if (n < 1 || n>12)
		return (char*)name[0];
	else
		return (char*)name[n];
};
int main(void)
{
	int i;
	for (i = 0; i < 13; i++)
	{
		printf("%d is %s\n", i, month_name(i));
	}
	return 0;
}