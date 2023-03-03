#include <stdio.h>
//포인터 기초 : (실습 소스)ch0501_ptr01.c 
int main(void)
{
	int x = 1, y = 2;
	int z[7] = { 1,2,3,4,5,6,7 };
	int* ip;
	int i;
	//변수 x와 y의 주소출력
	printf("addr : %x, %x\n", &x, &y);
	//정수형 배열 z의 주소출력
	for (i = 0; i < 7; i++)
		printf("%x, ",& z[i]);
	printf("\n");

	ip = &x; //ip는 x를 가리킨다
	y = *ip; //y는 1이 된다.
	*ip = 0; //x는 0이 된다
	printf("ip=%x, x=%d, y=%d'n", ip, x, y);

	ip = &z[0]; //ip는 z[0]을 가리킨다
	*ip = *ip + 10; //z[0]의 값에 10을 더한다
	y = *ip + 1; //y의 값은 *ip값에 1을 더한 값이 된다
	printf("ip=%x, x=%d, y=%d'n", ip, x, y);

	*ip += 1;
	x = ++ * ip; //x는 *ip값에 1을 더한 값이 된다
	printf("ip=%x, x=%d, y=%d\n", ip, x, y);

	x = *ip++; //ip주소를 증가시킨다
	y = (*ip)++; //*ip값을 증가시킨다
	printf("ip=%x, x=%d, y=%d\n", ip, x, y);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}