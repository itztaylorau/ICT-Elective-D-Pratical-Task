#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int main() {

    int num[6] = {97, 83, 50, 12, 36, 85};
    int i, min_value;

    min_value = num[0];

    for(i = 1; i <= SIZE - 1; i++){
        if(num[i] < min_value){
            min_value = num[i];
        }
    }
    printf("The minimum in the array is %d\n", min_value);
    return 0;
}
