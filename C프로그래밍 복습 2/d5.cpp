#include <stdio.h>
int str_len(char *s) {
	int n;
	for (n = 0; *s != '\0'; s++) { //s++이유 : char 의 주소는 1씩 커짐
		n++;
	}
	return n;
}
int main(void)
{
	char arr[] = "hello! world";
	int length;
	char* ptr;

	length = str_len(arr);
	for (int i = 0; i < length; i++) {
		printf("%x\n", arr + i);
	}
	printf("length = %d\n", length);

	ptr = arr;
	length = str_len(ptr);
	printf("length= %d\n", length);

	ptr = arr + 7;
	length = str_len(ptr);
	printf("length= %d , %s\n", length, ptr);

	return 0;
}