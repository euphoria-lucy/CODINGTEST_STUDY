#include <stdio.h>

main() {
   int a[ ] = {10,20,30};  //�迭�� �ּ�
   int *cp = &a[0];
   
   for(int i = 0; i <= 2 ; i++)
     printf("a[%d] = %d, �ּ� = %x\n", i, *(cp+i), &a[i]);
}
