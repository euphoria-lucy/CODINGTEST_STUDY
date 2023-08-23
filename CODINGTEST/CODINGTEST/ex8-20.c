#include <stdio.h>

int main() {
    float i, j;
    float *ip = &i;
    float *jp = &j;
    
    printf("두 수 입력 : ");
    scanf("%f %f", &i, &j);
    printf("sum = %.2f", *ip + *jp);
}

