#include <stdio.h>

int main() {
	int arr[6] = { 5, 3, 2, 4, 7, 9 };
	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[5] : %d\n", arr[5]);
	int* ptr = &arr[0]; // �迭�� ������ ������ ����, arr[0] ù��° �ּ� ����Ŵ
	*ptr = 10; // ù ��° �� �ٲٱ�
	*(ptr + 1) = 30; // �� ��° �� �ٲٱ�, �ڷ����� int�̹Ƿ� 1�� �����ϸ� 4byte�� �ڷ� �̵�
	*(ptr + 2) = 300; // �� ��° �� �ٲٱ�
	ptr[4] = 50; // �׹�° �� �ٲٱ� 
	ptr[5] = 70; // �ټ���° �� �ٲٱ�
	
	printf("���� �� �迭 ��� \n");
	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	printf("arr[3] : %d\n", arr[3]);
	printf("arr[4] : %d\n", arr[4]);
	printf("arr[5] : %d\n", arr[5]);
}
