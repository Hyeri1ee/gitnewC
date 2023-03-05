#include <stdio.h>
//구조체를 함수의 매개변수로 전달 1
typedef struct point {
	int x, y;
}POINT;
void ShowPoint(POINT p);
POINT AddPoint(POINT p1, POINT p2);
int main(void)
{
	POINT p1 = { 1,2 };
	POINT p2 = { 3,4 };
	POINT p3;

	ShowPoint(p1);
	ShowPoint(p2);
	p3 = AddPoint(p1, p2);
	ShowPoint(p3);

	return 0;
}
void ShowPoint(POINT p)
{
	printf("x=%d, y=%d\n", p.x, p.y);
}
POINT AddPoint(POINT p1, POINT p2)
{
	POINT temp;
	temp.x = p1.x + p2.x;
	temp.y = p1.y + p2.y;
	return temp;
}