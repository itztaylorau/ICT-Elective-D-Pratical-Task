#include <stdio.h>
#include <stdlib.h>

void main(){
    int x[1] = 0, y[1] = 0;
    int x[1] = 5, y[1] = 6;
    printf("%d, %d", x, y);
    x[2] = 6;
    y[2] = 5;
    x[1] = y[2];
    y[1] = x[2];
    printf("%d, %d", x, y);
}
