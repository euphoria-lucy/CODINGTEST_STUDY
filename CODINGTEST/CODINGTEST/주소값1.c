#include <stdio.h>

 int a = 20;   // �������� ��data�� ����   
 int b= 30;

main() {
 int c, d;      // �������� ��stack�� ����  
 char *e = 40;  // stack�� ����
 char *f= 50;

 printf("a = %d  b= %d\n\n",&a, &b); // ���������� ū��  
 printf("c = %d  d= %d\n\n",&c, &d); // ū������ ������ 
 printf("%d %d \n\n", &e,&f);
 printf("%d %d %d", main, printf, scanf); // heap�� ���� 
    
}
