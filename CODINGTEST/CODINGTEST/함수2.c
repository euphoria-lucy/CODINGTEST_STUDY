#include <stdio.h>
#include <string.h> // ���ڿ� ���̺귯�� �Լ� ���

int main() {
	char str1[20] = "Hello!";
	char str2[20] = "World";
	
	int len = strlen(str1);
	printf("���ڿ� ���� : %d\n", len);
	strcpy(str1, str2);
	printf("����� ���ڿ� : %d\n", str1);
	strcat(str1, " ");
	strcat(str1, str2);
	printf("�̾���� ���ڿ� : %s\n", str1);
	int cmp = strcmp(str1, str2);
	printf("�񱳰�� : %d\n", cmp);
} 
