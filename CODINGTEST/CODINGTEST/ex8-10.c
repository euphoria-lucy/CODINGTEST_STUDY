#include <stdio.h>

int main(void) {
	int a[5] = {10, 20, 30, 40, 50};
	
	printf("%d %d \n", a[0], a[1]);
	printf("%d %d \n", &a[0], &a[1]);
	printf("�迭�ּ� : %d %d %d\n", a, &a);
	printf("�迭���� : %d\n", a[2]);
}
