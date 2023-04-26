#include <stdio.h>

int main() {
	int choice;
	int num1, num2;
	printf("첫 번째 값 입력 → ");
	scanf_s("%d", &num1);
	printf("두 번째 값 입력 → ");
	scanf_s("%d", &num2);


	while (1) {
		printf("\t ♣ --------- ♣ \n");
		printf("\t | ①. 덧셈   | \n");
		printf("\t | ②. 뺄셈   | \n");
		printf("\t | ③. 곱셈   | \n");
		printf("\t | ④. 나눗셈 | \n");
		printf("\t | ⑤. 나머지 | \n");
		printf("\t | ⑥. 종료   | \n");
		printf("\t ♣ --------- ♣ \n");
		printf("★ 번호 선택 → ");
		scanf_s("%d", &choice);
		if (choice <= 0 && choice >= 7)
			break;
		switch (choice) {
		case 1:
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;
		case 2:
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
			break;
		case 3:
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			break;
		case 4:
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
			break;
		case 5:
			printf(" %d / %d의 나머지 = %d\n", num1, num2, num1 % num2);
			break;
		case 6:
			printf("♥ 종료 ♥\n");
			break;
		default:
			printf("잘못입력\n");
			break;
		}
		if (choice == 6) {
			break;
		}
	}
}
	