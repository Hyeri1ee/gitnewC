#include <stdio.h>
//�Լ������͸� ��ȯ�ϴ� �Լ� : (�ǽ� �ҽ�)ch0511_fn_ptr02.c
//�Լ� ����
int str_cmp(char* str1, char* str2)
{
	printf("%s , %s\n", str1, str2);
}

//�Լ������͸���ȯ�ϴ��Լ�����
int (*pfn(int x, int y)) (char*, char*)
{
	printf("%d , %d\n", x, y);
	return str_cmp;
}
int main(void)
{
	return 0;
}