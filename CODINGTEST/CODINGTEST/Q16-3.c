#include <stdio.h>

main() {
	int m = 0, i, j;

	for (i = 0; i < 10; i++) {
		m = i + 1;
		for (j = 0; j < 10; j++) {
			printf("%4d", m);
			m = m + 10;
		}
		printf("\n");
	}
}