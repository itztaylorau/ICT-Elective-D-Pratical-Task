#include <stdio.h>
#include <stdlib.h>
void main() {

    int num[17][17];
    int size, i, j;

    printf("Size (1 to 9): ");
    scanf("%d", &size);

    for(i = 0; i < size*2-1; i++){
        for(j=0; j < size*2-1; j++){
            num[i][j] = 0;
        }
    }

    for(i = 0; i < size; i++){
        for(j = 0; j <size*2-1-i*2; j++){
            num[i][i+j] = i + 1;
        }
    }

    for(i = 0; i <size*2-1; i++){
        for(j = 0; j <size*2-1; j++){
        printf("%d", num[i][j]);
    }
        printf("\n");
    }
    return 0;
}
