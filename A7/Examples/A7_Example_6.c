/*WARNING! BUG INSIDE THE PROGRAM WILL BE FIXED SOON. */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main() {
    char *name[SIZE] = {"Peter", "Mary", "John", "Bob", "Kathy"};
    int studentNum[SIZE] = {1001, 1002, 1003, 1004, 1005};
    int scores[SIZE] = {80, 75, 94, 97, 49};
    char conduct[SIZE] = {'B', 'C', 'A', 'C', 'B'};
    int i, input, status, trigger;
    printf("Enter student number: ");
    scanf("%d", &input);
    for(i = 0; i < SIZE; i++){
        if(studentNum[i] == input){
            printf("%s ", name[i]);
            printf("%d ", studentNum[i]);
            printf("%d ", scores[i]);
            printf("%c", conduct[i]);
            status = 1;
            trigger = 1;
        }else{if(trigger = 1){printf("X%d", trigger);}else{status = 0;printf("X%d", trigger);}}
    }
    if(status = 1){}else{printf("Required entry no found.");}
    return 0;
}
