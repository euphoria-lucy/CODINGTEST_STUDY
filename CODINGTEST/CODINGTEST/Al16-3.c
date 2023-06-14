#include <stdio.h>

int main() {
	int a[10][10];
	int n, i, j;
	scanf_s("%d", &n);

	int x = 1;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (j = 1; j <= n; j++) {
				a[j][i] = x;
				x++;
			}
		}
		else {
			for (j = n; j >= 1; j--) {
				a[j][i] = x;
				x++;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}

}