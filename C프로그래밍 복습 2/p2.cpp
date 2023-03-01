#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COUNT 5
//선택 정렬
int main(void) {
	int i, j, num[COUNT], temp;

	for (i = 0; i < COUNT; i++) {
		printf("%d번째 수를 입력하고, Enter를 누르세요 :", i + 1);
		scanf("%d",& num[i]);
	}
	for (i = 0; i < COUNT - 1; i++) { //선택 정렬
		for (j = i + 1; j < COUNT; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (i = 0; i < COUNT; i++) {
		printf("%d", num[i]);
	}
	return 0;
}