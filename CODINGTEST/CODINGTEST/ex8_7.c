#include <stdio.h>

main() {
   int a[ ] = {10,20,30};  //배열의 주소
   int *cp = &a[0];
   
   for(int i = 0; i <= 2 ; i++)
     printf("a[%d] = %d, 주소 = %x\n", i, *(cp+i), &a[i]);
}
