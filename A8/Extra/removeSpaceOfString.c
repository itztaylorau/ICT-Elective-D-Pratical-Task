/*
 * This program aims to remove useless space inside a string.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char text[30];
    int i = 0;

    printf("Enter some text: ");
    gets(text);

    while (text[i] == ' '){
        ++i;
    }

    while (text[i] !='\0'){
        if ((text[i] != ' ') || (text[i + 1] != ' ') && text [i + 1] != '\0'){
            printf("%c", text[i]);
        }
        ++i;
    }
}
