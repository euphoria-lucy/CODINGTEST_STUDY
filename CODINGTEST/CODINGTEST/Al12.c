#include <stdio.h>   

int main() {
    int a, b, c;
    printf("�Է°�= ");
    scanf("%d", &a);

    if (a > 0)
    {
        b = a * 10;
        printf("a�� ���, a = %d --> b = %d\n", a, b);
    }
    else
    {
        c = a * 20;
        printf("a�� ����, a = %d --> c = %d\n", a, c);
    }

}