#include <stdio.h>
#include <stdlib.h>

int main(){

	char input;
    int continueflag;

	printf("Continue <Y/N>: ");
	scanf("%c", input);
	continueflag = 1;
	while(continueflag) {
            if(input != 'Y' || 'N'){
                printf("Invalid response! Please try again");
                fflush(stdin);
                scanf("%c", input);
            }else{continueflag = 0;}
	}
}
