#include <stdio.h>
//구조체 배열
struct weight {
	char name[10];
	double w;
};
int main(void)
{
	struct weight man[3] = { {"하니",40},{"장군",122.3},{"동이",90.2} };
	struct weight temp;
	int i, k;
	for (i = 0; i < 2; i++) {
		for (k = i + 1; k < 3; k++) {
			if (man[i].w < man[k].w) {
				temp = man[i];
				man[i] = man[k];
				man[k] = temp;
			}
		}
	}
	printf("이름 \t체중\n");
	for (i = 0; i < 3; i++)
		printf("%s\t%5.1f\n", man[i].name, man[i].w);//몸무게 높은 순으로 출력
	return 0;
}