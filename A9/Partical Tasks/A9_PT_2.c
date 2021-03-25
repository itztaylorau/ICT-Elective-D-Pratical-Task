#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
<<<<<<< Updated upstream
=======
#define fruit 5
int accumulatedSum(char lineString[10]){
    int i, j, digitSection;
    char tmpStackString[11];
    for(i = 0; i <= strlen(lineString); ++i){
        if(isdigit(lineString[i]) || lineString[i] == '.'){
            for(j = i; j <= strlen(lineString); ++j){
                tmpStackString[j] = lineString[i];
            }
        }
    }

}

>>>>>>> Stashed changes
int main(){
    FILE *inFile;
    inFile = fopen("assets\\ParticalTask2_source.txt", "r");

    fclose();
}
