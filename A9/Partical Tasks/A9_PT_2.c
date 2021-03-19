#include <stdio.h>
#include <stdlib.h>
#define fruit 5
int accumulatedSum(char *lineString){
    int i, digitSection;
    char *tmp;
    for(i = 0; i < strlen(lineString); ++i){
        if(isdigit(lineString[i]) > 0 && digitSection == 1){
            strcpy(tmp, lineString[i]);
            printf("yay\n");
           digitSection = 1;
        }else{
        printf("nay\n");
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
