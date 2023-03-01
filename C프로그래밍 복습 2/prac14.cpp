#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char key;
	printf("키 하나를 누르세요. q를 누르면 프로그램을 종료합니다\n");
	do {
		key = _getch(); // 화면에 key 입력할 때, 안 보여줌.
	} while (key != 'q');
	printf("\n바이~~\n");
	return 0;
}