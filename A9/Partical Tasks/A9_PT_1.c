#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define arraySize 5
char tmp[3];
const char* toString(int integerScore){
    char stringScore[5];
    itoa(integerScore, stringScore, 10);
    if(integerScore > -1 && integerScore < 10){
        strcpy(tmp, "00");
        strcat(tmp, stringScore);
        return tmp;
    }else if(integerScore > 9 && integerScore < 100){
        strcpy(tmp, "0");
        strcat(tmp, stringScore);
        return tmp;
    }else{
        strcpy(tmp, "");
        strcat(tmp, stringScore);
        return tmp;
    }
}

int main(){
    char *name[5] = {"Peter", "Mary", "John", "Bob", "Kathy"}, conduct[5] = {'B', 'C', 'A', 'C', 'B'};
    int i, studentNumber[5] = {1001, 1002, 1003, 1004, 1005}, score[5] = {80, 0, 7, 100, 49};
    FILE *outfile;
    outfile = fopen("assets\\ParticalTask1_output.txt", "w");

    for(i = 0; i < arraySize; ++i){
        fprintf(outfile, "%s\t%d%s%c\n", name[i], studentNumber[i], toString(score[i]), conduct[i]);
    }
    fclose(outfile);
    return 0;
}
