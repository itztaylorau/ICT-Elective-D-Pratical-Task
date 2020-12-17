#include <stdio.h>
#include <stdlib.h>

int main () {

    /* Declare constant */
    int age, height;

    /* Asking for the age and height */
    printf("Please enter your age in integer:");
    scanf("%d", &age);
    printf("Please enter your height in cm:");
    scanf("%d", &height);

    /* if else */
    if(age > 2 || height > 100){
            printf("You have have to buy a ticket.");
    }else{
        printf("You don't have to buy a ticket.");

    }
    return 0;
}
