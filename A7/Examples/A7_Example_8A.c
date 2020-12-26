/* WARNING! THIS PROGRAM WAS SUBSPENDED DUE TO UNEXPECTED ERROR THAT NEED TO BE FIXED IN THE FUTURE. */
#include <stdlib.h>
#include <stdio.h>

int main() {
    float markData[2][3];
    int r, c;
    /* Initial array */
    for(r = 0; r < 2; r++){
        for(c = 0; c < 3; c++){
            markData[r][c] = 0;
        }
    }
    /* Receive data and store to array */
    for(r = 0; r < 2; r++){
        for(c = 0; c < 3; c++){
            printf("Mark of student %d Test %d: ", r + 1, c + 1);
            scanf("%f", &markData[r][c]);
        }
    }
    /* Calculate Averages */
    float tempTest[2] = {0, 0}, tempStudent[3] = {0, 0, 0};
    /* Test */
    for(r = 0; r < 2; r++){
        for(c = 0; c < 3; c++){
            tempTest[r] = tempTest[r] + markData[r][c];
        }
    }
    printf("%f", markData[r][c]);

}
