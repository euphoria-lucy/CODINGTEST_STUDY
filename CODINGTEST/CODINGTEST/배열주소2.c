#include <stdio.h>

int main() {
	int arr[6] = { 5, 3, 2, 4, 7, 9 };
	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[5] : %d\n", arr[5]);
	int* ptr = &arr[0]; // 배열을 조작할 포인터 선언, arr[0] 첫번째 주소 가리킴
	*ptr = 10; // 첫 번째 값 바꾸기
	*(ptr + 1) = 30; // 두 번째 값 바꾸기, 자료형이 int이므로 1씩 증가하면 4byte씩 뒤로 이동
	*(ptr + 2) = 300; // 세 번째 값 바꾸기
	ptr[4] = 50; // 네번째 값 바꾸기 
	ptr[5] = 70; // 다섯번째 값 바꾸기
	
	printf("변경 후 배열 출력 \n");
	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	printf("arr[3] : %d\n", arr[3]);
	printf("arr[4] : %d\n", arr[4]);
	printf("arr[5] : %d\n", arr[5]);
}
