#include <stdio.h>

 int a = 20;   // 전역변수 →data에 저장   
 int b= 30;

main() {
 int c, d;      // 지역변수 →stack에 저장  
 char *e = 40;  // stack에 저장
 char *f= 50;

 printf("a = %d  b= %d\n\n",&a, &b); // 작은수에서 큰수  
 printf("c = %d  d= %d\n\n",&c, &d); // 큰수에서 작은수 
 printf("%d %d \n\n", &e,&f);
 printf("%d %d %d", main, printf, scanf); // heap에 저장 
    
}
