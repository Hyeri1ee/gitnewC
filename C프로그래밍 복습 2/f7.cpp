#include <stdio.h>
#include <string.h>
//구조체 포인터 변수
struct person {
	char name[10];
	int birth;
};
int main(void)
{
	struct person man, * boy;
	boy = &man;
	strcpy(man.name, "헤이리"); //문자열 복사
	boy->birth = 880;
	printf("boy->name=%s,  man.birth=%d\n", boy->name, man.birth);
	return 0;
}