#include <stdio.h>

main() {

    int j = 0; int k = 1; //�����ʱ�ȭ 

    do {
        j = j + 1; // j�� ���� 1�� ���� 
        k = k * j; // k*j�� ���� k�� ����  
    } while (j < 5);

    printf("%d��° ���丮�� = %d", j, k);

}