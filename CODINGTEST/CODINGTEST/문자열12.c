#include <stdio.h>

main() {
   char day1[] = "hello!";
   char *day2 = "hello!";
   
   day1[0]='p';
   // day2[0]='p';	// ����� ���ǵ��� ����
   
   printf("%s\n", day1);
   printf("%d  %d\n", &day1, &day2);
}
