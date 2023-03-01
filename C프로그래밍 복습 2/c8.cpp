#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[100][20];
	int i = 0, j;

	do {
		printf("이름을 입력('끝'을 입력하면 종료) : ");
		scanf("%s", name[i]); //%s : name[i]이 가리키는 주소값에서 출력을 시작하여, null값을 만나면 종료
		if (strcmp(name[i], "끝") == 0) break;
		i++;
	} while (1);

	for (j = 0; j < i; j++) printf("%s\n", name[j]);
	return 0;
}