#include <stdio.h>

main() {
	char a = 'e'; // char a = 'e'
	char *b;
	
	char *c = "korea";
	// char *b = &a;
	// printf("	문자 1자 입력 : ");
	// scanf("%c", &a);
	
	// printf("%c, %d %d,, %c %d %d \n", b, b, &b, a, a, &a);
	// printf("%s, %d %d,, %s %d %d \n", b, b, &b, a, a, &a);
	printf("%c %d %c %d \n", a, a, *c, c);
	// printf("%c %s %d\n", *c, c, c); 
}
