#include <stdio.h> 
int main() {
    int score1, score2;
    printf("1������ ������ �Է��ϼ��� : ");
    scanf("%d", &score1);
    printf("2������ ������ �Է��ϼ��� : ");
    scanf("%d", &score2);
    if (score1 >= 60) {
        if (score2 >= 60)
            printf("�հ�\n");
        else
            printf("���հ�\n");
    }
    else                    //{
        printf("���հ�\n");   //}
}