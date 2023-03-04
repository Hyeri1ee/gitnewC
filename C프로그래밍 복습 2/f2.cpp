#include <stdio.h>
struct score {
	char hakbun[10];
	char name[10];
	int kor, eng, tot;
	double ave;
};
int main(void)
{
	struct score h = { "202211354","Çý¸®",90,100 };
	h.tot = h.kor + h.eng;
	h.ave = h.tot / 2;
	printf("%s , %s : %d %d %d %f\n", h.hakbun, h.name, h.kor, h.eng, h.tot, h.ave);

	return 0;
}