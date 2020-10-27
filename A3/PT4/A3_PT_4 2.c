#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    /* declare constant */
    int i;
    int num; int sqr; int cub;

    /* first row */
    printf("number     square      cube\n");
    /* loop row */
    for(i = 1; i < 6; ++i) {
        num = i;
        sqr = pow(i, 2);
        cub = pow(i, 3);
        printf("     %d        %3.d     %5.d\n", num, sqr, cub);
    }

    return 0;
}
