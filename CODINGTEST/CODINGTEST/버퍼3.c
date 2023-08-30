#include <stdio.h>

main() {
	int num, i;
	char c;
	
	printf("숫자입력 : ");
	scanf("%d", &num);
	getchar();
	printf("문자입력 : ");
	scanf("%c", &c);
	printf("입력한 문자 : %c", c);
}
