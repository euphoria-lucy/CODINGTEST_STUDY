#include <stdio.h>

int main() {
	int x = 0b1010; 
	int y = 0b0110; // 10Áø¼ö 6
	int and = x & y; // 0010
	printf("%d\n", and); // 2
	int or = x | y; // 1110
	printf("%d\n", or ); // 14
	int xor = x ^ y; // 1100
	printf("%d\n", xor);
	int not = ~x;
	printf("%d\n", not);
	int not1 = ~y;
	printf("%d\n", not1);

	return 0;
}