#include  <stdio.h>
main() {
	char aa[6]="KOREA";	// �迭  ����
 	char *p;
 	p = &aa[0];  // aa[0]�� �ʱ갪�� �ּҸ� ����Ų��.
 	printf("p=%x\n", &aa[0]);
 	
 	for (int i = 0 ;i <= 4; i++) {
   		printf("aa[%d]= %c, �ּҴ� %p\n", i, *(p+i), &aa[i]);
	}
}
