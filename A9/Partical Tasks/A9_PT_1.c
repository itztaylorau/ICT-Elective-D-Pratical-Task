#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define arraySize 5
char toString(int integerScore){
    char stringScore[5];
    itoa(integerScore, stringScore, 10);
    if(integerScore > 0 && integerScore < 10){
        strcat("00", stringScore);
        printf("%s", stringScore);
    }else if(integerScore > 9 && integerScore < 100){
        strcat("0", stringScore);
    }
}

int main(){
    char *name[5] = {"Peter", "Mary", "John", "Bob", "Kathy"}, conduct[5] = {'B', 'C', 'A', 'C', 'B'};
    int i, studentNumber[5] = {1001, 1002, 1003, 1004, 1005}, score[5] = {80, 0, 7, 100, 49};

    for(i = 0; i < arraySize; ++i){
        printf("%s\t%d%s%c\n", name[i], studentNumber[i], toString(score[i]), conduct[i]);
    }
}
