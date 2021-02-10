#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char user_input[5], add_zero[5];
    int i = 0;

    printf("Enter patient number: ");
    gets(user_input);

    if(strlen(user_input) != 5){
        for(i = 0; (5 - strlen(user_input)) > i; ++i){
            add_zero[i] = '0';
        }
        strcat(add_zero, user_input);
        printf("Patient number should be: %s", add_zero);
    }else{
        printf("Patient number should be: %s", user_input);
    }

    return 0;
}
