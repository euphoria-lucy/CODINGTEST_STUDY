#include <stdio.h>

main() {
	int num1, num2;
	
	printf("�����Է� : ");
	scanf("%d %d", &num1, &num2);
	
	printf("���� �� : x = %d, y = %d\n", num1, num2);
	
	swap(&num1, &num2);
	printf("���� �� : x = %d, y = %d\n", num1, num2);
	 
}

swap (ip1, ip2) 
	int *ip1, *ip2; {
	int temp;
	temp = *ip1;
	*ip1 = *ip2;
	*ip2 = temp;
}
