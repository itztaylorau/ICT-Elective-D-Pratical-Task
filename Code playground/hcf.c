#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int input, output;

float squareroot(int x) {
    output = sqrt(x);
    return output;
}

int main(){
    printf("Please input the number: ");
    scanf("%d", &input);
    printf("Result = %f", squareroot(input));
}
