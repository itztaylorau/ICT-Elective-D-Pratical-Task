/* This program aims to search name inside an array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *names[5] = {"Sakura", "Jisoo", "Jennie", "Rose", "Lisa"};
    char input[10];
    int i, status;
    printf("Please enter the name you want to search: ");
    scanf("%s", &input);Sakura
    for(i = 0; i < 5; i++){
        if(strcmp(names[i], input) == 0){
            printf("Required entry exists at index %d.", i);
            status = 1;
        }else{status = 0;}
    }
    if(status = 1){}else{printf("Required entry no found.");}
    return 0;
}
