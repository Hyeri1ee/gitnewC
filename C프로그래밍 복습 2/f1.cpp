#include <stdio.h>
//±¸Á¶Ã¼ 
struct Man {
	char name[10];
	int age;
	double weight;
};
int main(void)
{
	struct Man gildong, sunhee, comso[160];
	gildong.age = 20;
	sunhee.weight = 49;
	comso[0].age = 40;
	printf("%d %f %d\n", gildong.age, sunhee.weight, comso[0].age);
	return 0;
}