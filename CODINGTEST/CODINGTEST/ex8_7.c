#include <stdio.h>

int main() {
   char *a = "kor", "eng", "����";
   int i;
   
   for(i = 0; i <= 2; i++) {
   	printf("a[%d] = %c, �ּ� = %x\n", i, *(a+i), &a[i]);
   }

}
