#include <stdio.h>

int main() {
	char a[6] = "good!"; // 크기 수동 지정 배열 형태 선언
	char b[10] = "good!"; // 크기를 넉넉하게 선언한 경우
	char c[] = "good!"; // 크기 자동 지정 배열 형태 선언 
	char d[4] = "seoul good!" // 크기를 부족하게 선언한 경우
	
	char e = "seoul"; // 단순 char로 선언 불가
	char f[] = 'korea!'; // 따옴표 문제
	printf("%s %s %s %s %s %s", a, b, c, d, e, f);
}
