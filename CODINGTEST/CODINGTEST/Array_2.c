#include <stdio.h>
int main(){  // �迭 �ʱⰪ ��� �غ���
  int arr[3] = { 0, 1, 2 };    
  printf("arr[0] : %d\n", arr[0]);
  printf("arr[1] : %d\n", arr[1]);
  printf("arr[2] : %d\n", arr[2]);
  int* ptr = &arr[0];   // �迭�� ������ ������ ����, arr[0] ù��° �ּҸ� ����Ŵ.
  *ptr = 10;           // ù��° �� �ٲٱ�
  *(ptr + 1) = 30;   // �ι�° �� �ٲٱ�, �ڷ����� int�̹Ƿ� 1�� �����ϸ� 4byte�� �ڷ� �̵�.
  *(ptr + 2) = 300;  // ����° �� �ٲٱ�
  printf("���� �� �迭 ���\n");  // �迭 ����غ���
  printf("arr[0] : %d\n", arr[0]);
  printf("arr[1] : %d\n", arr[1]);
  printf("arr[2] : %d\n", arr[2]);
}
