#include <stdio.h>

int main() {
	char fruit[20] = "strawberry";
	printf("µþ±â : %s\n", fruit);
	printf("µþ±âÂ´ : %s %s\n", fruit, "jam");
	
	strcpy(fruit, "kiwi");
	printf("Å°À§ : %s\n", fruit);
	// printf("Å°À§ : %s\n', fruit[2]); 
}
