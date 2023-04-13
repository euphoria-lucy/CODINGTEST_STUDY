#include <stdio.h>   

int main() {
    int a, b, c;
    printf("입력값= ");
    scanf("%d", &a);

    if (a > 0)
    {
        b = a * 10;
        printf("a가 양수, a = %d --> b = %d\n", a, b);
    }
    else
    {
        c = a * 20;
        printf("a가 음수, a = %d --> c = %d\n", a, c);
    }

}