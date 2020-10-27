#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Declare constant */
    int i;
    float one, two, result;

    /* Ask for values and calculate */
    for(i = 1; i <= 3; i++) {

            printf("Mark of student %d Test 1: ", i);
            scanf("%f", &one);
            printf("Mark of student %d Test 2: ", i);
            scanf("%f", &two);
            result = (one + two) / 2;
            printf("Average mark of student %d = %.2f\n", i, result);
    }

    return 0;
}
