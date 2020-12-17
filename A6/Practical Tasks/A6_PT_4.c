#include <stdio.h>
#include <stdlib.h>
float convertion(float F);

int main() {
    printf("The Celsius degree is: %f\n", convertion(32));
    printf("The Celsius degree is: %f", convertion(100));
}

float convertion(float F) {
   //Do not use () for 5/9
   return (F-32) * 5/9;
}
