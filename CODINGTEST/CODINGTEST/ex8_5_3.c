#include <stdio.h>

int main() {
	char *a = "apple";
	puts(a); // ���ڿ��� ������ ��(null0���ڰ� �־�� �� 
	printf("%s\n", a);
	printf("%c, %c \n", *a, *(a+1));
}
