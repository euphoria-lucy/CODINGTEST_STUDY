#include <stdio.h>
int main(){ 
  int arr[3] = { 0, 1, 2 }; // �迭 �ʱⰪ ��� �غ���
   printf("arr[0] : %d\n", arr[0]);
   printf("arr[1] : %d\n", arr[1]);
   printf("arr[2] : %d\n", arr[2]);
    // �迭�� ������ ������ ����, arr[0] ù��° �ּҸ� ����Ŵ.
   int* ptr = &arr[0]; 
    ptr[0] = 50; // ù��° �� �ٲٱ�
    ptr[1] = 70; // �ι�° �� �ٲٱ�
    ptr[2] = 100;// ����° �� �ٲٱ�
    printf("���� �� �迭 ���\n");
    printf("arr[0] : %d\n", arr[0]);
    printf("arr[1] : %d\n", arr[1]);
    printf("arr[2] : %d\n", arr[2]);
}
