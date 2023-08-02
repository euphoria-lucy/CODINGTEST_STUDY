#include <stdio.h>

int main() {
   char *a = "kor", "eng", "수학";
   int i;
   
   for(i = 0; i <= 2; i++) {
   	printf("a[%d] = %c, 주소 = %x\n", i, *(a+i), &a[i]);
   }

}
