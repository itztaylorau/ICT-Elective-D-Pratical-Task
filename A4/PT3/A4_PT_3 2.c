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

    /* Analysis BMI */
    if(bmi < 18.5) {
        printf("\nYou are underweight.");
    }else if(bmi >= 18.5 && bmi < 25){
        printf("\nYou are fit.");
    }else{
        printf("\nYou are overweight.");
    }

    return 0;
}
