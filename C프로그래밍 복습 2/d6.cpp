#include <stdio.h>
//�ּ� ���� : (�ǽ� �ҽ�) ch0504_ptr_arith00.c
int main(void)
{
	char ca[] = { 's','t','r','i','n','g' };
	int ia[] = { 1,2,3,4,5,6 };
	char* cpa, * cpb;
	int* ipa, * ipb;
	int n;
	//----���డ���� ������ ����----
	//�����������������͵�������Ҵ�
	cpa = ca;
	ipa = ia;
	cpb = cpa;
	ipb = ipa;

	//�����Ϳ���������������
	cpa++;
	cpb = cpa - 1;
	ipb = ipa + 2;

	//�����������������͵鰣�Ǻ񱳿ͻ���
	n = cpa - cpb;
	printf("cpa-cpb = %d\n", n);
	n = ipb - ipa;
	printf("ipb-ipa = %d\n", n);

	//�����Ϳ������Ҵ��ϰų���
	cpa = 0;

	return 0;
}