#include <stdio.h>
void print(void);
int main(void)
{
	void (*view) (void); //함수 포인터 선언
	view = print; //함수 포인터에 print()함수의 주소값을 대입
	view(); //print() 로 호출하는 것과 동일
	return 0;
}
void print(void) {
	printf("나는 print 함수입니다.\n");
}