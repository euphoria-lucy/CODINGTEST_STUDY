#include <stdio.h>
#define ABS(x) (x > 0)? x : -x

main() {
	int i;
	printf("���� �Է�  �� ");
	scanf_s("%d", &i);
	printf("\n|%d| = %d\n", i, ABS(i));
}