#include <stdio.h>

main() {

    int j = 0; int k = 1; //변수초기화 

    do {
        j = j + 1; // j의 값을 1씩 누적 
        k = k * j; // k*j의 값을 k에 저장  
    } while (j < 5);

    printf("%d번째 팩토리얼 = %d", j, k);

}