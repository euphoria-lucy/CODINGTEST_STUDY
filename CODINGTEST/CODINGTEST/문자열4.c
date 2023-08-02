#include <stdio.h>

int main() {
	char *a = "good!"; // 포인터 형태 선언
	char b[] = "good!"; // 배열 형태 선언
	
	// 일부 글자 변경 시도 
	
	b[2] = 'x'; // "goob!"으로 변경 시도
	// a[1] = 'x'; // 변경 불가 segmentation fault 발생)
	printf("%s %s", a, b); // *a 
}
