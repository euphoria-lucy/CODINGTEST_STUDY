#include <stdio.h>
#define MULTI(x, y) x * y
#define ADD(x, y) x + y
#define DIVIDE(x, y) x / y

main() {
	int a = 65;
	int b = 37;
	float n1 = 9;
	float n2 = 2;
	printf("a = %d, b = %d\n", a, b);
	printf("n1 = %lf, n2 = %lf\n", n1, n2);
	printf("ADD ¡æ %d\n", ADD(a, b));
	printf("MULTI ¡æ %d\n", MULTI(a, b));
	printf("DIVIDE  ¡æ %lf\n", DIVIDE(n1, n2));

	return 0;
}