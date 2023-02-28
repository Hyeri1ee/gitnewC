#include <stdio.h>
int main(void)
{
	printf("%f\n", 100.789);
	printf("%e\n", 100.789);
	printf("%g\n", 100.789); //%e 와 %f 중에서 출력자릿수를 덜 차지하는 형태로 출력
	printf("%5.1f\n", 100.789);
	return 0;
}