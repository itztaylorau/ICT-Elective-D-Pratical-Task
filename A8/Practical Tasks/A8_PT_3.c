#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char word1[80], word2[80];
    int i, length;

    printf("Enter a word:");
    gets(word1);

    length = strlen(word1);

    for(i = 0; i < length; i++){
        if(islower(word[i])){
            word[i]-=32;
        }
        word2[length - 1 - i]
    }

}

