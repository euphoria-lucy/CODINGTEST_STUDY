#include <stdio.h>
#include <string.h> // 문자열 라이브러리 함수 사용

int main() {
	char str1[20] = "Hello!";
	char str2[20] = "World";
	
	int len = strlen(str1);
	printf("문자열 길이 : %d\n", len);
	strcpy(str1, str2);
	printf("복사된 문자열 : %d\n", str1);
	strcat(str1, " ");
	strcat(str1, str2);
	printf("이어붙인 문자열 : %s\n", str1);
	int cmp = strcmp(str1, str2);
	printf("비교결과 : %d\n", cmp);
} 
