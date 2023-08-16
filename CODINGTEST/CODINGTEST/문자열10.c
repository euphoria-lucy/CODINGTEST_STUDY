#include <stdio.h>

main() {
   char *a="hello!";
   char b[7]="hello!";	// 7이하일때 자리수 에러
   
   printf("%x %s  %s\n", a, a, b);
   printf("%x %c  %s\n", a, *a, b);
}
