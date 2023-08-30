#include <stdio.h>
#include <Math.h>

int main() {
	int num = -5;
	int abs_num = abs(num);
	printf("절댓값 : %d\n", abs_num);
	double sqrt_num = sqrt(16);
	printf("제곱근 : %lf\n", sqrt_num);
	double ceil_num = ceil(9.14);
	printf("내림결과 : %lf\n", ceil_num);
	double floor_num = floor(9.14);
	printf("내림결과 : %lf\n", floor_num);
}
