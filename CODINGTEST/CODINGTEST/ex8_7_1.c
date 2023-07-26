#include  <stdio.h>
main() {
 char aa[6]="KOREA";	// 배열  선언
 char *p;
 int   i;
 printf("%s\n", aa);
 p = &aa[0];  // aa[0]의 초깃값의 주소를 가리킨다.
 printf("p=%x\n", &aa[0]); 
 for   (i=0;i<=4;i++)
   printf("aa[%d]= %c, 주소는 %p\n", i, *(p+i), &aa[i]);
}
