#include <stdio.h>

aa(int num) {
    num++;
    printf("�Լ� �������� ��: %d\n", num);
}

main() {
    int number = 10;
    printf("�Լ� ȣ�� ���� ��: %d\n", number);
    aa(number);
    printf("�Լ� ȣ�� ���� ��: %d\n", number);
}
