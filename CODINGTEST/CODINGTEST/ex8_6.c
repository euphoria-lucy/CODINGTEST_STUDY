#include <stdio.h>

main() {
	char str1[6] = "today";
	char *p = str1;
	
	printf("%s\n", str1);
	printf("%10s\n", str1);
	printf("%-10s\n", str1);
	printf("%10.3s\n", str1);
	printf("%c\n", *(p+2)); // printf("%s\n", *p+2);
	printf("%c\n", str1[4]);
}
