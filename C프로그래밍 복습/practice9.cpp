#include <stdio.h>
int main(void)
{
	printf("%f\n", 100.789);
	printf("%e\n", 100.789);
	printf("%g\n", 100.789); //%e �� %f �߿��� ����ڸ����� �� �����ϴ� ���·� ���
	printf("%5.1f\n", 100.789);
	return 0;
}