#include <stdio.h>
#include <stdlib.h>

int main() {

    char house;

    printf("Please enter your house:");
    scanf("%c", &house);

    switch(house) {
        case 'Y':
            printf("Yellow House");
            break;
        case 'G':
            printf("Green House");
            break;
        case 'B':
            printf("Blue House");
            break;
        case 'R':
            printf("Red House");
            break;
    }
        return 0;
}
