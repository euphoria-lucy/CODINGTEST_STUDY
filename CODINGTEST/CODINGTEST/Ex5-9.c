#include <stdio.h>

int main() {
	int score = 0;
	printf("점수 입력 → ");
	scanf_s("%d", &score);

	if (score <= 100 && score >= 70) {
		printf("♥ 성공 ♥ \n");
	}
	else if (score < 70 && score >= 0) {
		printf("★ 실패 ★ \n");
	}
	else if (score < 0) {
		printf("오류 \n");
	}

	return 0;
}