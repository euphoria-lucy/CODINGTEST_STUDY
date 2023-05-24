#include <stdio.h>
#define HELLO "I am glad to meet you \n"
#define PRINT printf("a = %d\n", a)

int main() {
	int a = 65;
	printf(HELLO);
	printf(PRINT);
}