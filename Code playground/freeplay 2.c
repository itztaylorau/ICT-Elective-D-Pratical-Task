#include<stdio.h>
#include<stdlib.h>

int main() {

    float weight, height;
    float BMI;

    printf("Weight in kg: ");
    scanf("%f", &weight);
    printf("Height in m");
    scanf("%f", &height);

    BMI = ( weight / ( height  * height ));
    printf("BMI = %.1f \n", BMI);

return 0;
}
