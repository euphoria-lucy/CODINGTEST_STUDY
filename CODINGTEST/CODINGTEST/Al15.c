#include <stdio.h>

main() {

	int grade;
	printf("���� �Է� = ");
	scanf("%d", &grade);

	if (grade >= 70 && grade <= 100)
		printf("����\n");
	else if (grade >= 0 && grade < 70)
		printf("����\n");
	else
		printf("����\n");

}