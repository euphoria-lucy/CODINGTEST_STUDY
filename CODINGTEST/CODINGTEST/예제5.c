#include <stdio.h>
#define ABS(x) (x > 0)? x : -x

main() {
	int i;
	printf("정수 입력  → ");
	scanf_s("%d", &i);
	printf("\n|%d| = %d\n", i, ABS(i));
}