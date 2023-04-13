#include <stdio.h>

int main() {
    int SUM = 0; int N = 1; //ÃÊ±âÈ­ 

    do {
        SUM = SUM + N;
        N = N + 1;
        if (N > 100)      
            break;
    } while (N <= 100);   // N=1

    printf("%d\n", SUM);
}