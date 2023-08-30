#include <stdio.h>

aa(int num) {
    num++;
    printf("함수 내에서의 값: %d\n", num);
}

main() {
    int number = 10;
    printf("함수 호출 전의 값: %d\n", number);
    aa(number);
    printf("함수 호출 후의 값: %d\n", number);
}
