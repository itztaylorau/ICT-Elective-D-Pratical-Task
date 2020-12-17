#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[9];
    int i;
    // Gen array
    for (i = 0; i <= 9; i++){
        array[i] = rand() % 5;
    }
    // Display array
    for (i = 0; i <= 9; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
