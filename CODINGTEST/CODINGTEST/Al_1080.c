#include <stdio.h>

int main() {
	int num, sum, i = 0;
	scanf("%d", &num);

	while (sum < num) {
		i++;
		sum += i;
	}

	printf("%d", i);
	return 0;
}