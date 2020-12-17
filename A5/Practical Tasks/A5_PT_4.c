#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, amount, counter = 0;

    printf("Number of random numbers you want: ");
    scanf("%d", &amount);
    while(counter < amount) {
        printf("%d\n", rand() % 5);
        counter ++;
    }
    return 0;}
