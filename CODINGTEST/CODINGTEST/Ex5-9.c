#include <stdio.h>

int main() {
	int score = 0;
	printf("���� �Է� �� ");
	scanf_s("%d", &score);

	if (score <= 100 && score >= 70) {
		printf("�� ���� �� \n");
	}
	else if (score < 70 && score >= 0) {
		printf("�� ���� �� \n");
	}
	else if (score < 0) {
		printf("���� \n");
	}

	return 0;
}