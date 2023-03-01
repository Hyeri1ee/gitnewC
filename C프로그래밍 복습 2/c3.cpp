#include <stdio.h>
int main(void) {

	int x[5] = { 10,20,30,40,50 };
	int i;
	printf("x=%p\n", x);
	for (i = 0; i < 5; i++) {
		printf("%p=%d, %p=%d\n", &x[i], x[i], x + i, *(x + i));
	}
	return 0;
}