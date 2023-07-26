#include <stdio.h>

int main() {
	char *a = "good!"; // 포인터 형태 문자열 선언
	char b[] = "good!"; // 배열 선언 형태와 비교
	
	printf("%c, %s\n", a[0], a[1]); // g, o
	printf("%c, %s\n", b[0], b[1]); // g, o
	printf("%s\n", a); // good! 문자열 전체 출력
	printf("%s\n", b); // good!
}
