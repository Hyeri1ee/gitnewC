#include <stdio.h>
#include <time.h>
int main(void)
{
	struct tm* now;
	time_t t; //long int ��
	t = time(NULL);
	now = localtime(&t);

	printf("��¥ : %d�� %d�� %2d��\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
	printf("�ð� : %d�� %d�� %d��\n", now->tm_hour, now->tm_min, now->tm_sec);
	return 0;
}