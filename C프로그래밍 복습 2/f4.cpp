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

	printf("첫 번째 점의 x,y 좌표 : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("두 번째 점의 x,y 좌표 : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdif = p1.x - p2.x;
	ydif = p1.y - p2.y;

	distance = sqrt(xdif * xdif + ydif * ydif); //두점간의 거리 계산
	printf("두 점 사이의 거리 : %f\n", distance);
	return 0;
}