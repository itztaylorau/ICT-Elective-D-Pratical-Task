#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char alertmsg[] = "Wrong input!";
    char wholeword[13];
    char firstword[6];
    char secondword[6];
    int i;

    strcpy(wholeword, alertmsg);
    printf("%s\n", wholeword);

    strncpy(firstword, alertmsg, 5);
    firstword[5] = '\0';
    printf("%s\n", firstword);

    for(i = 0; i < 5; i++){
        secondword[i] = alertmsg[i+6];
    }
    secondword[5] = '\0';
    printf("%s\n", secondword);
return 0;
}
