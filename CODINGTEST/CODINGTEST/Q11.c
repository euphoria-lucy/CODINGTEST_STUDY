#include <stdio.h>

int main() {
	
	int n = 0, sum = 0, i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 3 == 0) {
			n = n + 1;
			sum += i;
			printf("3�� ��� �� %d\n", i);
		}
	}

	printf("���� �� %d\n", n);
	printf("�� �� %d\n", sum);

}