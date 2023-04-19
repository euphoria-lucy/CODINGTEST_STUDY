#include <stdio.h>

int main() {
	float num1, num2, num3, tmp;
	printf("실수 3개 입력 → ");
	scanf_s("%f", &num1);
	scanf_s("%f", &num2);
	scanf_s("%f", &num3);

	if (num1 > num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	if (num1 > num3) {
		tmp = num1;
		num1 = num3;
		num3 = tmp;
	}
	if (num2 > num3)
	{
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}

	printf("%f → %f → %f\n", num1, num2, num3);
}