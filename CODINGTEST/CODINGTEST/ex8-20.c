#include <stdio.h>

int main() {
    float i, j;
    float *ip = &i;
    float *jp = &j;
    
    printf("�� �� �Է� : ");
    scanf("%f %f", &i, &j);
    printf("sum = %.2f", *ip + *jp);
}

