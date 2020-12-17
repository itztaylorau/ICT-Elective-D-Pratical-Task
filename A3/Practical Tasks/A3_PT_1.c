#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Declare constant */
    float weight, height, bmi;

    /* Ask client for data */
    printf("Weight in kg: ");
    scanf("%f", &weight);
    printf("Height in m: ");
    scanf("%f", &height);

    /* Calculating BMI */
    bmi = weight / (height * height);

    /* Show result to client */
    printf("BMI %.1f", bmi);

    return 0;
}
