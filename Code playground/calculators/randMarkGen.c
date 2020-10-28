#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	//a
	int i, total_score, student_num = 29;

	for(i = 1; i < student_num; i++) {
	printf("%d\n", rand() % 124 + 100);
	total_score = total_score + (rand() % 101 + 100);

	}
	printf("The total score: %d\n", total_score);
	printf("The average score: %d\n", total_score / student_num);


	return 0;
}