#include <stdio.h>
#define SIZE 7
#define FALSE 0
#define TRUE 1

int main() {  
	int flightNumbers[7] = {101, 135, 250, 272, 338, 479, 647}, i = 0, userQuery, queryStats = FALSE;

	printf("Enter flight no.: ");
	scanf("%d", &userQuery);

	while(i < SIZE && !queryStats){
		if(userQuery == flightNumbers[i] && queryStats != TRUE){
			printf("Pass %d\n", i + 1);
			printf("%d is found in location no. %d\n", userQuery, i + 1);
			queryStats = TRUE;
		}else{
			printf("Pass %d\n", i + 1);
			queryStats = FALSE;
			++i;
		}
	}

	if(queryStats == FALSE){
		printf("%d is not found in the list.\n", userQuery);
	}

	return 0;
}
