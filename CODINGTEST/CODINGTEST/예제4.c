#include <stdio.h>
#define PI  3.141592

main() {
	double degree;
	double rad;

	printf("�Է��� ������  �� ");
	scanf_s("%lf", &degree);
	rad = (PI * degree) / 180.0;
	printf("\n%.2lf rads\n", rad);
}