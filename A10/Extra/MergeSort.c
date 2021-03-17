#include <stdio.h>
#include <stdlib.h>
#define x 7

void displaySort(int array[], int arraySize){
    int i;
    for(i = 0; i < arraySize; ++i){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void mergeSort(int array[], int top, int down){
    int middle;
    if(left < right){
        middle = (left + right) / 2;

        mergeSort
    }

}

int main() {
    int array[x] = {7, 5, 1, 8, 9, 3, 4};
    mergeSort(array, 0, x - 1);
    return 0;
}
