#include <stdio.h>

main() {

	int grade;
	printf("점수 입력 = ");
	scanf("%d", &grade);

	if (grade >= 70 && grade <= 100)
		printf("성공\n");
	else if (grade >= 0 && grade < 70)
		printf("실패\n");
	else
		printf("오류\n");

}