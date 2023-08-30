#include <stdio.h>

int sum(int k);

void main() {
	int su, ret;
	scanf("%d", &su);
	ret = sum(su); // 매개변수 0 
	printf("합계 :  %d\n", ret);
}

int sum(int k) {
	int i, hap = 0;
	for (i = 1; i <= k; i++) {
		hap += i;
	}
	return hap; // 반환값 0 
}
