// Square root calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int input;

	printf("Please enter the number you want to do square root: ");
	scanf("%d", &input);

	// Do the square root stuff
	input = sqrt(input);

	printf("%d", input);

	return 0;
}