#include <stdio.h>
//함수 매개변수에 구조체 포인터 넣기
typedef struct SCORE {
	int kor, eng;
}score;
int hap(score* phan);
int main(void)
{
	score han = { 90,100 };
	int sum;
	sum = hap(&han);
	printf("sum=%d\n", sum);

	return 0;
}
int hap(score* phan)
{
	return(phan->kor + phan->eng);
}