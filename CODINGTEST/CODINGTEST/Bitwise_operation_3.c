#include <stdio.h>

int main() { // 범위 : -128 ~ 127 
	int a = 65;
	int b = 2;
	printf("%d\n", a << 1);
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d   %o   %o   %x", b << 1, b << 2, b << 3, b << 1);

	// b ==> 8진법 16 10진법 14 → 28, 10진법 56 → 8진법 70
	// b ==> 8진법 10 10진법 14 28 → 16진법 1c

	return 0;

}