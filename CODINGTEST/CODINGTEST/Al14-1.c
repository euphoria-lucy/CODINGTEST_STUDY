#include <stdio.h>

int main() {

	int score;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("수\n");
	else if (score >= 80)
		printf("우\n");
	else if (score >= 70)
		printf("미\n");
	else if (score >= 60)
		printf("양\n");
	else
		printf("불합격: 가\n");

}