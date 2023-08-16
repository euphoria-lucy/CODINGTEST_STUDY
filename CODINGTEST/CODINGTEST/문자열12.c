#include <stdio.h>

main() {
   char day1[] = "hello!";
   char *day2 = "hello!";
   
   day1[0]='p';
   // day2[0]='p';	// 결과가 정의되지 않음
   
   printf("%s\n", day1);
   printf("%d  %d\n", &day1, &day2);
}
