#include <stdio.h>
int main(){   // �迭�� �� �ּҰ� Ȯ��
 int arr[3] = {0, 1, 2}; // �ڷ����� int�̹Ƿ� 4byte�� ����
   printf("�迭 �ּ�: %p\n", arr);
   printf("ù��° : %p\n", &arr[0]);
   printf("�ι�° : %p\n", &arr[1]);
   printf("����° : %p\n", &arr[2]);
}
