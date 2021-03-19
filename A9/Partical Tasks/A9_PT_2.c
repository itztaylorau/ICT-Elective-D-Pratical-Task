#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define fruit 5
int accumulatedSum(char lineString[10]){
    int i, digitSection;
    char tmpStackString[10];
    for(i = 0; i <= strlen(lineString); ++i){
        if(isdigit(lineString[i])){
            strcpy(lineString[i], lineString[i]);
            printf("(Y)\t%s ", lineString[i]);
        }else{
            printf("(N)\t%c ", lineString[i]);
        }
    }
}
int main(){
    int i;
    char lineString[20];
    FILE *infile;
    infile = fopen("assets\\ParticalTask2_source.txt", "r");
    while(fgets(lineString, 20, infile) != NULL){
        printf("%s", lineString);
        accumulatedSum(lineString);
    }
    fclose;
}
