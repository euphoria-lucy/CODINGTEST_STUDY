#include <stdio.h>

void main() {
	char ch;
	char *p = &ch;
	printf("���� 1�� �Է� : ");
	scanf("%c", &ch);
	printf("%c %d %c %d \n", *p, p, ch, ch, &ch);
	
	return 0;
}
