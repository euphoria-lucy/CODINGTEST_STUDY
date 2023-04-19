#include <stdio.h>

int main() {
	int num = 0;

	printf("정수 입력 → ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d → 2의 배수", num);
	}
	else if (num % 3 == 0) {
		printf("%d → 3의 배수", num);
	}
	else if (num % 2 == 0) {
		if (num % 3 == 0) {
			printf("%d → 2와 3의 배수", num);
		}
	}
	else if (num % 2 != 0) {
		if (num % 3 != 0) {
			printf("%d → 2와 3의 배수 X", num);
		}
	}
}