#include <stdio.h>

int main() { // ���� : -128 ~ 127 
	int a = 65;
	int b = 2;
	printf("%d\n", a << 1);
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d   %o   %o   %x", b << 1, b << 2, b << 3, b << 1);

	// b ==> 8���� 16 10���� 14 �� 28, 10���� 56 �� 8���� 70
	// b ==> 8���� 10 10���� 14 28 �� 16���� 1c

	return 0;

}