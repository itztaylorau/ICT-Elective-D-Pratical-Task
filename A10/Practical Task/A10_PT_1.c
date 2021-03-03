#include <stdio.h>
#define SIZE 7
#define FALSE 0
#define TRUE 1

int main() {
	int flight_numbers[7] = {101, 135, 250, 272, 338, 479, 647}, i = 0, user_query, query_stats = FALSE;

	printf("Enter flight no.: ");
	scanf("%d", &user_query);

	while(i < SIZE && !query_stats){
		if(user_query == flight_numbers[i] && query_stats != TRUE){
			printf("Pass %d\n", i + 1);
			printf("%d is found in location no. %d\n", user_query, i + 1);
			query_stats = TRUE;
		}else{
			printf("Pass %d\n", i + 1);
			query_stats = FALSE;
			++i;
		}
	}

	if(query_stats == FALSE){
		printf("%d is not found in the list.\n", user_query);
	}

	return 0;
}
