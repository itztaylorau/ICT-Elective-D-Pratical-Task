#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char word[80];
    int i = 0;

    printf("Enter a word: ");
    gets(word);

    for (i = strlen(word) - 1; i >= 0; i--){
        printf("The word reversed is %c", word[i]);
    }
return 0;

}
