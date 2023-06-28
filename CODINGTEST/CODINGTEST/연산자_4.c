#include <stdio.h>

void main() {
	int a[5] = {100, 200, 300, 400, 500};
	int *ip = &a[0]; // = a도 같음
	int i;
	printf("%d\n", a[2]);
	
	for (i = 0; i <= 4; i++) {
		printf("a[%d] = %d, 주소 = %x\n", i, *(ip + i), &a[i]);
		printf("%x %x %x\n", ip, ip + 1, ip + 2);
	}
}
