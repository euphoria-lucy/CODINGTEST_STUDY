#include <stdio.h>

int main() {

	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("��\n");
	else if (score >= 80)
		printf("��\n");
	else if (score >= 70)
		printf("��\n");
	else if (score >= 60)
		printf("��\n");
	else
		printf("���հ�: ��\n");

}