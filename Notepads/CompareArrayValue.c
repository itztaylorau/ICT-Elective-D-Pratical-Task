/* This program aims to find the largest and smallest number inside an array */
#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[3] = {45, 25, 21}, largest = 0, smallest = array[0], i;

    for(i = 0; i < 3; i++){
        if(array[i] > largest){
            largest = array[i];
        }else if(array[i] < smallest){
            smallest = array[i];
        }
    }
    printf("The largest number in the array is: %d\n", largest);
    printf("The smallest number in the array is: %d", smallest);
    return 0;
}
