#include <stdio.h>  
main() {
   int i, j;
   int *ip;
   printf("�Էµ�����: ");
   scanf("%d", &i);   printf("\n");
   ip = &i;
   j = *ip;
      printf("i �ּ� = %d\n",&i);
      printf("�����ͺ���ip = %d\n\n",ip);
   printf("j = %d",j);
   printf("����ip = %d",*ip);
}