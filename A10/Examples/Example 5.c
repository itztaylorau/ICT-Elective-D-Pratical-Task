#include <stdio.h>
#include <stdlib.h>
#define N 10

void swap_string(char x[10], char y[10]){
    char temp[10];
    strcpy(temp, y);
    strcpy(y, x);
    strcpy(x, temp);
}

int main(){
     char name[10][10] = {"PETER", "MARY", "JOHN", "BOB", "KATHY", "DAVID", "ALAN", "SUSAN", "FIONA", "WILLIAM"};
	 int i, j, k;
	 
	 printf("Initial: ");
	 for(k = 0; k < N; k++){
		 printf("%s\t", name[k]);
	 }
	 printf("\n");
	 
	 for(j = 1; j <= N - 1; j++){
		 printf("Pass %d: ", j);
		 
		 for(i = 1; i <= N - j; i++){
			 if(strcmp(name[i-1], name[i]) == 1){
				 swap_string(name[i-1], name[i]);
			 }
		for(k = 0; k < N; k++){
			printf("%s\t", name[k]);
		}
		printf("\n");
		 }
	 }
	 return 0;
}
