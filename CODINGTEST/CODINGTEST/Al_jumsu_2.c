#include <stdio.h>

int main() {
	int M = 0;
	int i = 0;
	int ENGLISH[] = { 100, 65, 37, 06, 2, 33, 30, 21, 11, 10 };
	int MATH[] = { 65, 37, 93, 98, 30, 98, 32, 14, 29, 77 };

	while (i < 10) {
		if (MATH[i] > M) {
			M = MATH[i];
		}
		i++;
		if (i >= 10) {
			break;
		}

	}

	printf("%d", M);

	return 0;

}