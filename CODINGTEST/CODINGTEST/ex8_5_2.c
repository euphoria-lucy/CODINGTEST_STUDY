#include <stdio.h>

main() {
	char *cp = "Apple"; // cp는 4byte apple는 6바이트이므로 저장 불가
	// char cp[6  = "Apple";
	printf("%s\n", cp);
	while (*cp != '\0') {
		printf("%s\n", cp);
		cp++;
	}
}
