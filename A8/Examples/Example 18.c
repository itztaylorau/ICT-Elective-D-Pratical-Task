/*
 * LKT said not use city_A method (?)(as I remember)
 */
#include <stdio.h>
#include <stdlib.h>

int main () {
    char city_B[4][10] = {"Niigata", "Tokyo", "Hakata", "Yamagata"};
    int i;

    for (i = 0; i <= 3; ++i) {
        printf("%s\t", city_B[i]);
    }
    return 0;
}
