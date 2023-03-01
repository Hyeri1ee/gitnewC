#include <stdio.h>
int main(void) {
	int ival = 10;
	char cval = 'A';
	double dval = 15.6;
	void* ptemp; //void형 포인터

	ptemp = &ival;
	printf("%d\n",*(int*)ptemp); //void형 포인터를 int형 포인터로 형 변환
	ptemp = &cval;
	printf("%c\n", *(char*)ptemp);
	ptemp = &dval;
	printf("%5.2lf\n", *(double*)ptemp);
	return 0;
}