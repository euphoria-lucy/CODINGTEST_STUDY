#include <stdio.h>

int main() {
    int i;
    int *ip = &i;

    printf("Input an integer : ");
    scanf("%d", &i);

	(*ip)--;
    printf("result : %d\n", *ip);

    return 0;
}

