#include <stdio.h>

int main() {
	int m = 1, i, j;
	for (i = 0; i < 5; i++) {
		m = i + 1;
		for (j = 1; j <= 5; j++) {
			printf("%3d", m);
			m += 5;
		}
		printf("\n");
	}
}