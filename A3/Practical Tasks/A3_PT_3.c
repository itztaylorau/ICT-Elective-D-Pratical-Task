#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Declare constant */
    int i, principal;
    float tempResult;
    char *tempYear;

    /* Ask user to input data */
    printf("Please enter the amount of principal: ");
    scanf("%d", &principal);
    printf("=====================================");
    tempResult = principal;
    /*Calculating and send the result to client*/
    for(i=2; i < 6; ++i) {
        tempResult = tempResult * (1 + 0.05);
        switch(i) {
            case 2:
               tempYear = "first";
               break;
            case 3:
               tempYear = "second";
               break;
            case 4:
               tempYear = "third";
               break;
            case 5:
               tempYear = "fourth";
               break;
        }
        printf("\nThe %s year amount: %.2f\n", tempYear, tempResult);
    }
return 0;
}
