#include <stdio.h>

main() {

    int x, y;
    printf("x �� ");  scanf_s("%d", &x);
    printf("y �� ");  scanf_s("%d", &y);

    if (x < 100)
        printf("C class\n");

    else if (x + y > 0)
        printf("A class\n");
    
    else
        printf("B class\n");
}