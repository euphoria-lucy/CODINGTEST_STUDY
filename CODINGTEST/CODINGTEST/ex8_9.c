#include <stdio.h>  
main() {
   int i, j;
   int *ip;
   printf("입력데이터: ");
   scanf("%d", &i);   printf("\n");
   ip = &i;
   j = *ip;
      printf("i 주소 = %d\n",&i);
      printf("포인터변수ip = %d\n\n",ip);
   printf("j = %d",j);
   printf("변수ip = %d",*ip);
}
