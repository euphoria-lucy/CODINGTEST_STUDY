#include <stdio.h>

int main() {
	char a[6] = "good!"; // ũ�� ���� ���� �迭 ���� ����
	char b[10] = "good!"; // ũ�⸦ �˳��ϰ� ������ ���
	char c[] = "good!"; // ũ�� �ڵ� ���� �迭 ���� ���� 
	char d[4] = "seoul good!" // ũ�⸦ �����ϰ� ������ ���
	
	char e = "seoul"; // �ܼ� char�� ���� �Ұ�
	char f[] = 'korea!'; // ����ǥ ����
	printf("%s %s %s %s %s %s", a, b, c, d, e, f);
}
