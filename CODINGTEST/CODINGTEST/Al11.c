#include <stdio.h>

int main() {

    int score, pass;
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    printf("합격점을 입력하세요 : ");
    scanf("%d", &pass);

    if (score >= pass)
        printf("합격\n");
    else
        printf("불합격\n");

    printf("01234567890");  //  여기선 실행

}