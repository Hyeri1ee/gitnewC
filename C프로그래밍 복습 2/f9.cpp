#include <stdio.h>
#include <time.h>
int main(void)
{
	struct tm* now;
	time_t t; //long int 형
	t = time(NULL);
	now = localtime(&t);

	printf("날짜 : %d년 %d월 %2d일\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
	printf("시간 : %d시 %d분 %d초\n", now->tm_hour, now->tm_min, now->tm_sec);
	return 0;
}