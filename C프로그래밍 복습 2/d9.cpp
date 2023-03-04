#include <stdio.h>
//���������Ϳ� �Լ� (���ڿ���) : (�ǽ� �ҽ�) ch0505_str02.c
//���ڿ���(�迭 ���)
int strcmp1(char* s, char* t) {
	int i;
	for (i = 0; s[i] == t[i]; i++)
	{
		if (s[i] == '\0')
			return 0;
	}
	return s[i] - t[i];
}
int main(void)
{
	char str1[] = "This is a string, array";
	const char* str2 = "This is a string, pointer";
	int result;

	result = strcmp1(str1, (char*)str2);
	if (result < 0)
		printf("%d (str1 < str2)\n", result);
	else if (result > 0)
		printf("%d (str1 > str2)\n", result);
	else
		printf("%d (str1 == str2)\n", result);

	return 0;
}