#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* scoreConvert(int score){
    char buffer[10];
    if(strlen(score) == 2){
        char buffer2[10] = "0";
        itoa(score, buffer, 10);
        strcat(buffer2, buffer);
        printf("A");
        return buffer2;
    }else if(strlen(score) == 1){
        char buffer2[10] = "00";
        itoa(score,buffer, 10);
        strcat(buffer2, buffer);
        printf("B");
        return buffer2;
    }else{
        return itoa(score, buffer, 10);
    }
}

int main(){
    printf("%s", scoreConvert(65));
    return 0;
}
