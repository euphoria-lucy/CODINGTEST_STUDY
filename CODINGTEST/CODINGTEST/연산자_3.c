#include <stdio.h>
main(){
   int i;
   int *ip = &i;
   printf("�����Է�: ");
   scanf("%d ", &i);
   printf("��� = %d ",*ip+1);
   printf("�ּҰ�= %d  %d",ip,ip+1);
   
   return 0; 
}
