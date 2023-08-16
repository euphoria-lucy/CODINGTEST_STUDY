#include <stdio.h>

main() {	

	int a[3] = {23, 134, 67};
	int * b = a;
	int a_size = sizeof a;	// 12 = 3 × 4
	int b_size = sizeof b;	// PC에 따라 다름
	printf("%d %d \n", a_size, b_size);	// 12 8
}
