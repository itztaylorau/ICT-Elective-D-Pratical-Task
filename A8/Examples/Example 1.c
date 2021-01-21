/*
 * Chapter A8 - Example 1
 * show variable as %c and %d
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char alphabet;
    int ascii_code;

    alphabet = 'A';
    printf("%c\n", alphabet);
    printf("%d\n", alphabet);

    printf("\n");

    ascii_code = 97;
    printf("%d\n", ascii_code);
    printf("%c\n", ascii_code);
}
