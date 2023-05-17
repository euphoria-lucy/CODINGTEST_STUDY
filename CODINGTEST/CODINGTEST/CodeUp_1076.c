#include <stdio.h>

int main() {
    char x, t = 'a';
    scanf_s("%c", &x);

    do {
        printf("%c ", t);
        t++;
    } while (t <= x);

    return 0;
}