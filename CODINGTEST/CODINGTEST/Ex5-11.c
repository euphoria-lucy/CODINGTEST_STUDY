#include <stdio.h>

int main() {
	int num = 0;

	printf("���� �Է� �� ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d �� 2�� ���", num);
	}
	else if (num % 3 == 0) {
		printf("%d �� 3�� ���", num);
	}
	else if (num % 2 == 0) {
		if (num % 3 == 0) {
			printf("%d �� 2�� 3�� ���", num);
		}
	}
	else if (num % 2 != 0) {
		if (num % 3 != 0) {
			printf("%d �� 2�� 3�� ��� X", num);
		}
	}
}