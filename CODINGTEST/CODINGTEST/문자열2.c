#include <stdio.h>

int main() {
	char *a = "good!"; // ������ ���� ���ڿ� ����
	char b[] = "good!"; // �迭 ���� ���¿� ��
	
	printf("%c, %s\n", a[0], a[1]); // g, o
	printf("%c, %s\n", b[0], b[1]); // g, o
	printf("%s\n", a); // good! ���ڿ� ��ü ���
	printf("%s\n", b); // good!
}
