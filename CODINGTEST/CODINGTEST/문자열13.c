#include <stdio.h>

int main() {
 int * a;      
 int * b; 
 int c[5];      
 int d[5];
 int x=5;
 
  a = c;
  c = a;	// ������ ����  
  a = &x;
  c = &x;	// ������ ����  
  a = b;
  c = d;	// ������ ����  �ϳ��� �迭�� �ٸ� �迭�� �����ϱ� ���ؼ��� ������ ��Ҹ� ������ �����������
   
  printf("%d \n", a); 
}
