#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define fruit 5
int accumulatedSum(char lineString[10]){
    int i, j, digitSection;
    char tmpStackString[11];
    for(i = 0; i <= strlen(lineString); ++i){
        if(isdigit(lineString[i]) || lineString[i] == '.'){
            for(j = i; j <= strlen(lineString); ++j){
                tmpStackString[j] = lineString[i];
                printf("(L)\t%c\n", tmpStackString[i]);
            }
        }
    }
    for(j = i; j <= strlen(lineString); ++j){
        printf("(L)\t%c\n", tmpStackString[i]);
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
    return 0;
}
