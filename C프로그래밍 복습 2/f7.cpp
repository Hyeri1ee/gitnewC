#include <stdio.h>
#include <string.h>
//����ü ������ ����
struct person {
	char name[10];
	int birth;
};
int main(void)
{
	struct person man, * boy;
	boy = &man;
	strcpy(man.name, "���̸�"); //���ڿ� ����
	boy->birth = 880;
	printf("boy->name=%s,  man.birth=%d\n", boy->name, man.birth);
	return 0;
}