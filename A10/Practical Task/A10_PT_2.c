#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define SIZE 14
#define TRUE 1
#define FALSE 0

int main() {
    char *city[SIZE] = {"Amsterdam", "Auckland", "Bangkok", "Jakarta", "London", "Manila", "New York", "Osaka", "Paris", "Singapore", "Sydney", "Tokyo", "Vancouver", "Zurich"};
    char userQuery[30];
    int top, middle, last, location, queryStats = FALSE, pricing[SIZE] = {6500, 6200, 2100, 2375, 4985, 1450, 8300, 4250, 5100, 2215, 5400, 4600, 6000, 7500};

    printf("Enter city name: ");
    scanf("%s", userQuery);

    top = 0;
    last = SIZE - 1;

    while(top <= last && queryStats == FALSE){
        middle = (top + last) / 2;
        if(strcmp(userQuery, city[middle]) == 0){
            location = middle;
            queryStats = TRUE;
        }else if(strcmp(userQuery, city[middle]) == -1){
            last = middle - 1;
        }else{
            top = middle + 1;
        }
    }

    if(queryStats){
        printf("Fare is $%d\n", pricing[location]);
    }else{
        printf("%s is not in the list.", userQuery);
    }
}
