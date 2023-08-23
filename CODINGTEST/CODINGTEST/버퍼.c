#include <stdio.h>

int main() {
	int num;
	char c;
	
	printf("숫자입력 : ");
	scanf("%d", &num);
	printf("문자입력 : ");
	scanf("%c", &c);
	printf("%d   %c", num, c);
}
