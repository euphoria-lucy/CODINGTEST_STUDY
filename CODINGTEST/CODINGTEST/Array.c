#include <stdio.h>
int main(){   // 배열의 각 주소값 확인
 int arr[3] = {0, 1, 2}; // 자료형은 int이므로 4byte씩 증가
   printf("배열 주소: %p\n", arr);
   printf("첫번째 : %p\n", &arr[0]);
   printf("두번째 : %p\n", &arr[1]);
   printf("세번째 : %p\n", &arr[2]);
}
