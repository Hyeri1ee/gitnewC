#include <stdio.h>
//������ �迭�� ������ / (�ǽ� �ҽ�) ch0507_multi_array01.c
//������(2����) �迭����
static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31}, //���� �ƴ� == 0
	{0,31,29,31,30,31,30,31,31,30,31,30,31} //����==1
};

//day_of_year :��,��,���� 365�Ϸ� ��ȯ
int day_of_year(int year, int month, int day)
{
	int i, leap;
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0; //���� ==1
	for (i = 1; i < month; i++)
	{
		day += daytab[leap][i];
		return day;
	}
}

//month_day : �ش�⵵�� 365���� ��,�Ϸ� ��ȯ
void month_day(int year, int yearday, int* pmonth, int* pday)
{
	int i, leap;
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0; //���� ==1
	for (i = 1; yearday > daytab[leap][i]; i++)
	{
		yearday -= daytab[leap][i];
	}
	*pmonth = i;
	*pday = yearday;
}
int main(void)
{
	int year = 2023, month = 3, day = 4, day2;

	day2 = day_of_year(year, month, day);
	printf("%d�� %d�� %d�� : %d��\n", year, month, day, day2);

	month_day(year, day2, &month, &day);
	printf("%d�� %d�� : %d�� %d��\n", year, day2, month, day);
	return 0;
}