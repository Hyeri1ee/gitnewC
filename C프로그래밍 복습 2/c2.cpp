#include <stdio.h>
int main(void) {
	int ival = 10;
	char cval = 'A';
	double dval = 15.6;
	void* ptemp; //void�� ������

	ptemp = &ival;
	printf("%d\n",*(int*)ptemp); //void�� �����͸� int�� �����ͷ� �� ��ȯ
	ptemp = &cval;
	printf("%c\n", *(char*)ptemp);
	ptemp = &dval;
	printf("%5.2lf\n", *(double*)ptemp);
	return 0;
}