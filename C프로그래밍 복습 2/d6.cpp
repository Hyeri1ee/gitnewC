#include <stdio.h>
//주소 연산 : (실습 소스) ch0504_ptr_arith00.c
int main(void)
{
	char ca[] = { 's','t','r','i','n','g' };
	int ia[] = { 1,2,3,4,5,6 };
	char* cpa, * cpb;
	int* ipa, * ipb;
	int n;
	//----수행가능한 포인터 연산----
	//동일한형태의포인터들사이의할당
	cpa = ca;
	ipa = ia;
	cpb = cpa;
	ipb = ipa;

	//포인터에정수덧셈과뺄셈
	cpa++;
	cpb = cpa - 1;
	ipb = ipa + 2;

	//동일한형태의포인터들간의비교와뺄셈
	n = cpa - cpb;
	printf("cpa-cpb = %d\n", n);
	n = ipb - ipa;
	printf("ipb-ipa = %d\n", n);

	//포인터에영을할당하거나비교
	cpa = 0;

	return 0;
}