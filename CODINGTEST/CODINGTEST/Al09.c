#include <stdio.h>

int main() {

    int N = 1; int F = 1; int S = 1;

    while (1) {
        N++;
        F = F * N;
        S += F;
        if (N == 5) break;
    }

    printf("%d\n", S);

}