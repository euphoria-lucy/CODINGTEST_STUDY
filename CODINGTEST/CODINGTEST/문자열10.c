#include <stdio.h>

main() {
   char *a="hello!";
   char b[7]="hello!";	// 7�����϶� �ڸ��� ����
   
   printf("%x %s  %s\n", a, a, b);
   printf("%x %c  %s\n", a, *a, b);
}
