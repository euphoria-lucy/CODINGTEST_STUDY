#include <stdio.h>

int main() {
	int choice;
	int num1, num2;
	printf("ù ��° �� �Է� �� ");
	scanf_s("%d", &num1);
	printf("�� ��° �� �Է� �� ");
	scanf_s("%d", &num2);


	while (1) {
		printf("\t �� --------- �� \n");
		printf("\t | ��. ����   | \n");
		printf("\t | ��. ����   | \n");
		printf("\t | ��. ����   | \n");
		printf("\t | ��. ������ | \n");
		printf("\t | ��. ������ | \n");
		printf("\t | ��. ����   | \n");
		printf("\t �� --------- �� \n");
		printf("�� ��ȣ ���� �� ");
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
			printf(" %d / %d�� ������ = %d\n", num1, num2, num1 % num2);
			break;
		case 6:
			printf("�� ���� ��\n");
			break;
		default:
			printf("�߸��Է�\n");
			break;
		}
		if (choice == 6) {
			break;
		}
	}
}
	