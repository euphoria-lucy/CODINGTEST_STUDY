#include<stdio.h>

int main(void) {
	int num1, num2, sum;
	printf("����1 : ");
	scanf("%d", &num1);	// == scanf_s("%d", &num1);
	printf("����2 : ");
	scanf("%d", &num2);	// == scanf_s("%d", &num2);
	sum = Sum(num1, num2);
	printf("��� : %d\n", sum);
	return 0;
}

int Sum(int n1, int n2) {
	return (n1 + n2);
}
