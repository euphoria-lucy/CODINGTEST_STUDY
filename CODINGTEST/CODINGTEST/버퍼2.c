#include <stdio.h>
int main() {
	int i;
	char str[6];
	
	printf("숫자 입력 : ");
	scanf("%d", &i);
	printf("문자입력 : ");
	scanf("%s", str);
	printf("%d	%s", i, str);
}
