// Pow calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int number, power, final;

	printf("Please enter the number: ");
	scanf("%d", &number);
	printf("Please enter the power: ");
	scanf("%d", &power);

	// Do the pow stuff
	final = pow(number, power);

	printf("%d", final);

	return 0;
}