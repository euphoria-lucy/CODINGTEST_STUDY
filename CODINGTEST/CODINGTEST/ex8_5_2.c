#include <stdio.h>

main() {
	char *cp = "Apple"; // cp�� 4byte apple�� 6����Ʈ�̹Ƿ� ���� �Ұ�
	// char cp[6  = "Apple";
	printf("%s\n", cp);
	while (*cp != '\0') {
		printf("%s\n", cp);
		cp++;
	}
}
