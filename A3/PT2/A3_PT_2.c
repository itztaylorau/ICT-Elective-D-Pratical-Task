#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    /* Declare constants */
    int cm, finalFoot, finalInch;
    double inch, foot;

    /* Ask client for value */
    printf("Please enter the length in cm: ");
    scanf("%d", &cm);

    /* Calculate the answers */
    foot = cm / (12 * 2.54);
    finalFoot = foot - 0.5;
    inch = foot - finalFoot;
    finalInch = (inch * 12) + 0.5;

    /* Show result to client */
    printf("%d feet %d inches", finalFoot, finalInch);
}
