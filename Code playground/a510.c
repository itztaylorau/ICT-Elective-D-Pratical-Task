#include <stdio.h>
#include <stdlib.h>

int main() {

    int numdata, data, even = 0, odd = 0,
    int continueflag;

    continueflag = 1;
    while(continueflag) {
    	printf("Enter data (zero or negative number to end):");
    	scanf("%d", &data);

    	if(data <=0) {
    		continueflag = 0;
    	}else{
    		if(data%2) {
    			odd++;
    		}else{
    			even++;
    		}
    	}
    }
    printf("No. of even integers = %d\n", even);
    printf("No. of odd integers = %d\n", odd);
}
