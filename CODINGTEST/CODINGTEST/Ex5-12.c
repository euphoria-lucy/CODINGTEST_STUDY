#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("점수 3개를 입력하시오: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if ((num1 >= 0 && num1 <= 100) && (num2 >= 0 && num2 <= 100)
		&& (num3 >= 0 && num3 <= 100)) {
		printf("average = %.2f\n", (num1 + num2 + num3) / 3.0);
	}
	else {
		printf("오류 : 잘못된 점수입니다.\n");
	}

}