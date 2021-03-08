#include <stdio.h>
#include <stdlib.h>
#define X_SIZE 5
#define Y_SIZE 5

void merge_two_lists(char x[][10], char y[][10], char z[][10], int x_size, int y_size){
    int x_marker, y_marker, z_marker;

    x_marker = 0;
    y_marker = 0;
    z_marker = 0;

    while(x_marker < x_size && y_marker < y_size){
        if(strcmp(x[x_marker], y[y_marker]) >= 0){
            strcpy(z[z_marker++], x[x_marker++]);
        }else{
            strcpy(z[z_marker++], y[y_marker++]);
        }
    }
    while(x_marker < x_size){
        strcpy(z[z_marker++], x[x_marker++]);
    }
    while(y_marker < y_size){
        strcpy(z[z_marker++], y[y_marker++]);
    }
}

int main(){
    char x[X_SIZE][10] = {"WILLIAM", "MARY", "FIONA", "DAVID", "ALAN"};
    char y[Y_SIZE][10] = {"SUSAN", "PETER", "KATHY", "JOHN", "BOB"};
    char z[X_SIZE + Y_SIZE][10] = {};
    int i;

    merge_two_lists(x, y, z, X_SIZE,Y_SIZE);
    for(i = 0; i < X_SIZE + Y_SIZE; ++i){
        printf("%s\t", z[i]);
    }

    return 0;
}
