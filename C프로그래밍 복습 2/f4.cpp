#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> //sqrt()
struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1, p2;
	int xdif, ydif;
	double distance;

	printf("ù ��° ���� x,y ��ǥ : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("�� ��° ���� x,y ��ǥ : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdif = p1.x - p2.x;
	ydif = p1.y - p2.y;

	distance = sqrt(xdif * xdif + ydif * ydif); //�������� �Ÿ� ���
	printf("�� �� ������ �Ÿ� : %f\n", distance);
	return 0;
}