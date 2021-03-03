#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define SIZE 14
#define TRUE 1
#define FALSE 0

int main() {
 char *city[SIZE] = {"Amsterdam", "Auckland", "Bangkok", "Jakarta", "London", "Manila", "New York", "Osaka", "Paris", "Singapore", "Sydney", "Tokyo", "Vancouver", "Zurich"}, user_query;
 int first, last, middle, query_stats = FALSE, pricing[SIZE] = {6500, 6200, 2100, 2375, 4985, 1450, 8300, 4250, 5100, 2215, 5400, 4600, 6000, 7500};

 printf("Enter city name: ");
 scanf("%s", &user_query);

 first = 0;
 last = SIZE - 1;

 while(first <= last && query_stats == FALSE){
    middle = (first + last) / 2;
    printf("middle : %d", middle);
    if(user_query = city[middle]){
        printf("Fare is $%d", pricing[middle + 1]);
    }else{
        if(user_query < city[middle]){

        }
    }

 }
  return 0;
}
