#include <stdio.h>
main(){
    /*int a[5]={1,2,3,4,5};*/
    char a[6]="korea";
    char *p, *q;
    p=a;    /* p = &a[0] */
    q=a+1;  /* q2= &a[1] */
    printf("p = %d\n", *p);
    printf("q = %d\n", *q);
    printf("p = %c\n", *p);
    printf("q = %c\n", *q);
    printf("p = %x\n", p);
    printf("q = %x\n", q);
    printf("p의 크기는 %d\n", sizeof(p));
    printf("q의 크기는 %d", sizeof(q));
}
