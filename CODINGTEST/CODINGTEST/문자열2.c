#include <stdio.h>

int main() {
	char *a = "good!"; // ������ ���� ���ڿ� ����
	char b[5] = "good!"; // �迭 ���� ���¿� ��
	char *c = "good";
	char d[5] = "good";
	
	printf("%c, %s\n", a[0], a[1]); // g, o
	printf("%c, %s\n", b[0], b[1]); // g, o
	printf("%s\n", a); // good! ���ڿ� ��ü ���
	printf("%s\n", b); // good!
	printf("%d %d %d %d ", a, b, c, d); // good
}
