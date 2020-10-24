#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Declare constant */
    int row, column;

    for (row = 9; row >= 1; row--) {
        for (column = 1; column <= row; column++) {
            printf("%d",column);
        }
        printf("\n");
    }

    return 0;
}
