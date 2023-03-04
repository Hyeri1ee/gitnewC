#include <stdio.h>
typedef struct score {
	char hakbun[10];
	char name[10];
	int kor, eng, tot;
	double ave;
}SCORE;
int main(void)
{
	SCORE j, h = { "202011332","го╢о",90,91 };
	h.tot = h.kor + h.eng;
	j = h;
	printf("%s , %s , %d %d %d\n", h.hakbun, h.name, h.kor, h.eng);
	printf("%s , %s , %d %d %d\n", j.hakbun, j.name, j.kor, j.eng);
	return 0;
}