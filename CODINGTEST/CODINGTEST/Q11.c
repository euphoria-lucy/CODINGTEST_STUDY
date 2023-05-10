#include <stdio.h>

int main() {
	
	int n = 0, sum = 0, i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 3 == 0) {
			n = n + 1;
			sum += i;
			printf("3의 배수 → %d\n", i);
		}
	}

	printf("개수 → %d\n", n);
	printf("합 → %d\n", sum);

}