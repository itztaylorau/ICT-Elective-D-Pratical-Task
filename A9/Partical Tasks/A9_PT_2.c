#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
char storedResult[5][30];
int i;
void takePrice(char *inputData){
    int j, k;
    char priceStack[5][10];
    for(j = 0; j <= strlen(inputData); ++j){
        if(isdigit(inputData[j])){
                for(k = 0; k < 10; ++k){
                   priceStack[i][k] = inputData[j];
                }

        }
    }
    printf("AAA %s\n", priceStack[i]);
}
int main(){
    FILE *inFile;
    inFile = fopen("assets\\ParticalTask2_source.txt", "r");
    char readResult[20];
    while(fgets(readResult, 20, inFile) != NULL){
        printf("%s", readResult);
        strcpy(storedResult[i], readResult);
        takePrice(storedResult[i]);
        ++i;
    }
    fclose(inFile);
    return 0;
}
