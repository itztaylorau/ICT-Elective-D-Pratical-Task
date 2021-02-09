#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char word[80];
    int i = 0;

    printf("Enter a word: ");
    gets(word);

    printf("The word reversed is ");

    for(i = strlen(word) - 1; i >= 0; --i){
        printf("%c", word[i]);
    }
}
