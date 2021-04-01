#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define arrayLength 10
char swap(char one[], char two[]){
    char tmp[255];

    strcpy(tmp, one);
    strcpy(one, two);
    strcpy(two, tmp);
}
int main(){
    char *names[10] = {"PETER", "MARY", "JOHN", "BOB", "KATHY", "DAVID", "ALAN", "SUSAN", "FIONA", "WILLIAM"}, *tmp[1];
    int i, j;
    printf("Initial: ");
    for(i = 0; i < arrayLength; ++i){
        printf("%s\t", names[i]);
    }
    printf("\n");
    for(j = 1; j < arrayLength; ++j){
        for(i = 0; i < arrayLength; ++i){
            if(strcmp(names[i], names[i + 1]) > 0){
                printf("%s %s\n", names[i], names[i + 1]);
                swap(names[i], names[i + 1]);
            }else{
                printf("!\n");
            }
        }
    }
}
