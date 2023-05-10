#include <stdio.h>

int main() {
	int i = 0, count = 0, n = 0;

	printf("정수 입력 → ");
	scanf_s("%d", &n);

	i = 1;

	do {
		if (n % i == 0) {
			printf("약수 → %d\n", i);
			i++;
			count += 1;
		}
		else {
			i++;
		}
	} while (i <= n);
	printf("개수 → %d", count);
}