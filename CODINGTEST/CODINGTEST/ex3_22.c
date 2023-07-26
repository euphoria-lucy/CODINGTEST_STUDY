#include <stdio.h>

main() {
	char a[] = "software";
	char *b = "hardware";
	puts(a);
	puts(&a[2]);
	puts(a[2] + 3);
	puts(b);
	puts(b + 4);
}
