#include <stdio.h>

int main() {
	int i = 0, count = 0, n = 0;

	printf("���� �Է� �� ");
	scanf_s("%d", &n);

	i = 1;

	do {
		if (n % i == 0) {
			printf("��� �� %d\n", i);
			i++;
			count += 1;
		}
		else {
			i++;
		}
	} while (i <= n);
	printf("���� �� %d", count);
}