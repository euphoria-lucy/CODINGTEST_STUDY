#include <stdio.h>

void main() {
	// 포인터변수의 바이트는 컴퓨터에 따라 다름 
	char k = 'A';
	char string_one[] = "Hello World";
	char *string_two = "Hello World";
	char string_thr[12] = "Hello World";
	char string_four[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	
	printf("%c %d\n", k, k);
	printf("%s\n", string_one);
	printf("%s %d\n", string_one, string_one);
	printf("%s\n\n", string_two);
	printf("%s %d\n", string_two, string_two);
	printf("%s\n", string_thr);
	printf("%s\n", string_four);
}
