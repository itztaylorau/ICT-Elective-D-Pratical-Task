#include <stdio.h>
#include <stdlib.h>
int main() {
	
	char first_char, second_char;

	printf("Please input the first character: ");
	scanf("%c", &first_char);
	printf("%c", first_char);

	printf("Please input the second character: ");
	scanf(" %c", &second_char);
	printf("%c", second_char);

	return 0;
}