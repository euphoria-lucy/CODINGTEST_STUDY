#include <stdio.h>

main() {
	char *a[] = {"korea", "japan", "america", "italy", "mexico", "poland", "swiss"};
	int i, j, k, N = 7;
	char *p, *temp;
		printf("���������� : \n");
	for (i = 0; i < N; i++) {
		printf("%s   ", a[i]);
		for (i = 0; i < N - 1; i++) {
			p = a[i];
			k = i;
		}
		for (j = i; j < N; j++) {
			if (strcmp(a[j], p) > 0) {
				p = a[j];
				k = j;
			}
		}
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
	printf("\n\n\n �������� data : \n");
	for (i = 0; i < N; i++) {
		printf("%s ", a[i]);
	}
}
