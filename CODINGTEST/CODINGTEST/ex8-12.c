#include <stdio.h>

int main() {
	char s1[6] = "hello!";
	char *s2 = "HELLO!";
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	s1[0] = 'D'; // ���氡��
	// s2[0] = 'D'; // ����Ұ���
	printf("%s\n", s1);
	s2 = "�ȳ�";
	printf("%s %c \n", s2, s1); 
}
