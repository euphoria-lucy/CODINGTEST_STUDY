#include <stdio.h>

int main() {
	int cnt = 0;
	int i = 0;
	int jumsu[] = { 100, 65, 37, 06, 2, 33, 30, 21, 11, 10 };

	while (jumsu[i] >= 80) {
		cnt += 1;
		i += i;
		break;
	}

	printf("%d", cnt);

	return 0;
	
}