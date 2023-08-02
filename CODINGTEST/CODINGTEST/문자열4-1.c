#include <stdio.h>

int main() {
	char *a[3] = {"kor", "eng", "¼öÇÐ"};
	
	int i;
	for (i = 0; i <= 2; i++) {
		printf("a[%d] = %s, %x\n", i, a[i], a + i);
	}
}
