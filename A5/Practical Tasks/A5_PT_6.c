#include <stdio.h>
#include <stdlib.h>

int main() {

	char input;
    int continueflag = 1;

    do {
        printf("Continue <Y/N>: ");
        scanf("%c", &input);
        if((input == 'Y') || (input == 'N')){
            continueflag = 0;
            printf("You have made a valid response.\n");
        }else{
            printf("Invalid response! Please try again\n");
            fflush(stdin);
        }} while (continueflag);
    return 0;}
