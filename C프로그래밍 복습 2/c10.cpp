#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//동적 메모리 할당 : int
int main(void)
{
	int* pi;
	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {
		printf("메모리할당이 되지 않았습니다.");
		exit(1);
	}
	*pi = 200;
	printf("메모리에 할당된 값은 %d 입니다.\n", *pi);
	free(pi);
	return 0;
}