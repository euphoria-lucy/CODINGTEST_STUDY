#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if ((num1 >= 0 && num1 <= 100) && (num2 >= 0 && num2 <= 100)
		&& (num3 >= 0 && num3 <= 100)) {
		printf("average = %.2f\n", (num1 + num2 + num3) / 3.0);
	}
	else {
		printf("���� : �߸��� �����Դϴ�.\n");
	}

}