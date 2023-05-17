#include <stdio.h>

int main() { // ¹üÀ§ : -128 ~ 127 
	int a = 65;
	int b = 2;
	printf("%d\n", a & b);
	printf("%d\n", a | b);
	printf("%d\n", a ^ b);
	printf("%d\n", ~a);
	printf("%d\n", ~b);

	return 0;

}