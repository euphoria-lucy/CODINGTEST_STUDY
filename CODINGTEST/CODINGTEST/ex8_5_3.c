#include <stdio.h>

int main() {
	char *a = "apple";
	puts(a); // 문자열의 끝에는 널(null0문자가 있어야 함 
	printf("%s\n", a);
	printf("%c, %c \n", *a, *(a+1));
}
