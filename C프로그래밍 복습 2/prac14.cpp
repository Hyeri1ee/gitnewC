#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char key;
	printf("Ű �ϳ��� ��������. q�� ������ ���α׷��� �����մϴ�\n");
	do {
		key = _getch(); // ȭ�鿡 key �Է��� ��, �� ������.
	} while (key != 'q');
	printf("\n����~~\n");
	return 0;
}