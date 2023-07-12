#include <stdio.h>

void main() {
	char *p="windows";
	printf("%s\n",p); 
	printf("%d\n",p); 
	// printf("%c %c %c\n",p[3], p[4], p[5] );
	printf("%c %c %c\n",*p + 3, *p + 4, *p + 5 );
}
