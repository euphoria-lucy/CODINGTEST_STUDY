#include <stdio.h>   

main() {
	int score;
	char level;
	printf("입력값 = ");
	scanf("%d", &score);

	if (score >= 90) {
		level = 'A';
		printf("평가점수 = %c\n", level);
	}
	else if (score >= 80) {
		level = 'B';
		printf("평가점수 = %c\n", level);
	}
	else if (score >= 70) {
		level = 'C';
		printf("평가점수 = %c\n", level);
	}
	else if (score >= 60) {
		level = 'D';
		printf("평가점수 = %c\n", level);
	}
	else {
		level = 'F';
		printf("평가점수 = %c\n", level);
	}

}