#include <stdio.h>

main() {
	char *a[4] = {"����", "����", "�뱸", "�λ�"};
	int i;
	
	for (i = 0; i <= 3; i++) {
		printf("a[%d] = %s\n", i, a[i]);
	}
}
