#include <stdio.h>
int main(){ 
  int arr[3] = { 0, 1, 2 }; // 배열 초기값 출력 해보기
   printf("arr[0] : %d\n", arr[0]);
   printf("arr[1] : %d\n", arr[1]);
   printf("arr[2] : %d\n", arr[2]);
    // 배열을 조작할 포인터 선언, arr[0] 첫번째 주소를 가리킴.
   int* ptr = &arr[0]; 
    ptr[0] = 50; // 첫번째 값 바꾸기
    ptr[1] = 70; // 두번째 값 바꾸기
    ptr[2] = 100;// 세번째 값 바꾸기
    printf("변경 후 배열 출력\n");
    printf("arr[0] : %d\n", arr[0]);
    printf("arr[1] : %d\n", arr[1]);
    printf("arr[2] : %d\n", arr[2]);
}
