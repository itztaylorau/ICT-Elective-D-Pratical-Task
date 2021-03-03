#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
#define FALSE 0
#define TRUE 1

int main() {
	char *name[10] = {"Peter", "MARY", "JOHN", "BOB", "KATHY", "DAVID", "ALAN", "SUSAN", "FIONA", "WILLIAM"};
	int i, location_found, target_found;
	char target_name[10];

	printf("Etner name to search: ");
	scanf("%s", target_name);

	i = 0;
	target_found = FALSE;
	while( i < SIZE && !target_found){
		if(strcmp(target_name, name[i]) != 0){
			i  = i + 1;
		}else{
			location_found = i + 1;
			printf("%s is found in location no. %d\n", target_name, location_found);
			target_found = TRUE;
			++i;
		}
	}

	if(!target_found){
		printf("%s is not found in the list.\n", target_name);
	}
	
	return 0;
}
