#include <stdio.h>
main(){
   char *a = "KBS";
   int i;
   for(i = 0; i<= 2 ; i++)
     printf("a[%d] = %c, аж╪р = %x\n", i, *(a+i), &a[i]);
}
