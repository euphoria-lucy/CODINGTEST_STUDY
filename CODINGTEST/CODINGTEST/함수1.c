#include <stdio.h>

int sum(int k);

void main() {
	int su, ret;
	scanf("%d", &su);
	ret = sum(su); // �Ű����� 0 
	printf("�հ� :  %d\n", ret);
}

int sum(int k) {
	int i, hap = 0;
	for (i = 1; i <= k; i++) {
		hap += i;
	}
	return hap; // ��ȯ�� 0 
}
