#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

int main() {
    char user_input[80];
    int i = 0, correct_stats = 0;

    printf("Enter a word: ");
    gets(user_input);

    for(i = 0; i <= strlen(user_input); ++i){
        //Check if characters are match with each other (tolower() is used for convert all character to lowercase temporarily)
        if(tolower(user_input[i]) == tolower(user_input[strlen(user_input) - 1 - i])){
            correct_stats = correct_stats + 1;
        }
    }

    if(correct_stats == strlen(user_input)){
        printf("%s is a palindrome.", user_input);
    }else{
        printf("%s is not a palindrome.", user_input);
    }

    return 0;
}
