#include <stdio.h>

main() {
	char *a[4] = {"서울", "대전", "대구", "부산"};
	int i;
	
	for (i = 0; i <= 3; i++) {
		printf("a[%d] = %s\n", i, a[i]);
	}
}
