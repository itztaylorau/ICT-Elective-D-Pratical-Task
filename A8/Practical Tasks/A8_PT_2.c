#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char password[5] = "bingo", user_input[80];
    int i, correct_count = 0;

    printf("Enter password: ");
    gets(user_input);

    //Check input and password character by character
    for(i = 0; i <= strlen(user_input) - 1; ++i){
        if(isupper(user_input[i])){
            if(toascii(user_input[i]) + 32 == toascii(password[i])){
                correct_count = correct_count + 1;
            }
        }else{
              if(user_input[i] == password[i]){
                correct_count = correct_count + 1;
            }
        }
    }

    if(correct_count == strlen(password) - 1){
        printf("Correct password.");
    }else{
        printf("Wrong password!");
    }

    return 0;
}
