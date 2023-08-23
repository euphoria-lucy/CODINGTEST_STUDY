#include <stdio.h>

main() {
	int num1, num2;
	
	printf("정수입력 : ");
	scanf("%d %d", &num1, &num2);
	
	printf("변경 전 : x = %d, y = %d\n", num1, num2);
	
	swap(&num1, &num2);
	printf("변경 후 : x = %d, y = %d\n", num1, num2);
	 
}

swap (ip1, ip2) 
	int *ip1, *ip2; {
	int temp;
	temp = *ip1;
	*ip1 = *ip2;
	*ip2 = temp;
}
