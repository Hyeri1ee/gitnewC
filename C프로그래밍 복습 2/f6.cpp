#include <stdio.h>
//����ü �迭
struct weight {
	char name[10];
	double w;
};
int main(void)
{
	struct weight man[3] = { {"�ϴ�",40},{"�屺",122.3},{"����",90.2} };
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
	printf("�̸� \tü��\n");
	for (i = 0; i < 3; i++)
		printf("%s\t%5.1f\n", man[i].name, man[i].w);//������ ���� ������ ���
	return 0;
}