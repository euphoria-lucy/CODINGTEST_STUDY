#include <stdio.h>

main() {
	int A[100][100];
	int i, j, k = 0, n;

	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			k++;
			A[j][i] = k;
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%5d", A[j][i]);
		}
		printf("\n");
	}
}