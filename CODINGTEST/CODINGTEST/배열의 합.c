#include <stdio.h>

main() {
	int a[] = {10, 20, 30, 40, 50};
	int *b;
	int sum = 0;
	b = a;
	
	do {
		sum += *b++;
	} while (b <= &a[4]);
	
	printf("гу : %d\n", sum);
	
//	for (i = 0; i < 5; i++) {
//		int *ap = &a[i];
//		sum += (*ap);
//	}
//	
//	printf("%d\n", sum);
	 
}
