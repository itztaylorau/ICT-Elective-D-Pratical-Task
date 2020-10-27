#include <stdio.h>
#include <stdlib.h>
int main() {

    /* declare constant */
    int day;

    /*Ask for input */
    printf("Today is day:");
    scanf("%d", &day);

    /* switch */
    switch(day) {
        case 1:
            printf("Have a nice week");
            break;
        case 2: case 3: case 4: case 5:
            printf("Welcome");
            break;
        case 6 :case 7:
            printf("Have a nice weekend");
            break;
        default:
            printf("No such day");
            break;
    }
    return 0;
}
