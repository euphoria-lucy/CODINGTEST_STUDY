#include <stdio.h>

int main() {
	char *a = "good!"; // ������ ���� ����
	char b[] = "good!"; // �迭 ���� ����
	
	// �Ϻ� ���� ���� �õ� 
	
	b[2] = 'x'; // "goob!"���� ���� �õ�
	// a[1] = 'x'; // ���� �Ұ� segmentation fault �߻�)
	printf("%s %s", a, b); // *a 
}
