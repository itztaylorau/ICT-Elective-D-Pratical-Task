#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define SIZE 14
#define TRUE 1
#define FALSE 0

int main() {
    char *city[SIZE] = {"Amsterdam", "Auckland", "Bangkok", "Jakarta", "London", "Manila", "New York", "Osaka", "Paris", "Singapore", "Sydney", "Tokyo", "Vancouver", "Zurich"};
    char user_query[30];
    int top, middle, last, query_stats = FALSE, pricing[SIZE] = {6500, 6200, 2100, 2375, 4985, 1450, 8300, 4250, 5100, 2215, 5400, 4600, 6000, 7500};

    printf("Enter city name: ");
    scanf("%s", user_query);

    top = 0;
    last = SIZE - 1;

    while(top <= last && query_stats == FALSE){
        middle = (top + last) / 2;
        printf("%s!", city[middle]);
        printf("%d", strcmp(user_query, city[middle]);
        if(strcmp(user_query, city[middle]) == 0){
            printf("Fare is $%d", pricing[middle]);
            query_stats = TRUE;
        }
    }
}
