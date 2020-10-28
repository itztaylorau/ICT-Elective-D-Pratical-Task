#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	
	int num, upper = 13, lower = 5;

	num = (rand()% (upper + 1 - lower) + lower);
	printf("%d\n", num);

	return 0;
}