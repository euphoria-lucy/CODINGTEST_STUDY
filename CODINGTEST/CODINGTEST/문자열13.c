#include <stdio.h>

int main() {
 int * a;      
 int * b; 
 int c[5];      
 int d[5];
 int x=5;
 
  a = c;
  c = a;	// 컴파일 오류  
  a = &x;
  c = &x;	// 컴파일 오류  
  a = b;
  c = d;	// 컴파일 오류  하나의 배열을 다른 배열로 복사하기 위해서는 각각의 요소를 일일이 복사해줘야함
   
  printf("%d \n", a); 
}
