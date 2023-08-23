#include <stdio.h>

int main(void) {
	int a[5] = {10, 20, 30, 40, 50};
	
	printf("%d %d \n", a[0], a[1]);
	printf("%d %d \n", &a[0], &a[1]);
	printf("배열주소 : %d %d %d\n", a, &a);
	printf("배열내용 : %d\n", a[2]);
}
