#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char* convert_score(int score){
    char *string_score[3];
    itoa(score, string_score, 10);
    printf("X %s", string_score);
    return string_score;
}

int main() {
    int i;
    char *name[5] = {"Peter", "Mary", "John", "Bob", "Kathy"} , conduct[5] = {'B', 'C', 'A', 'C', 'B'};
    int student_number[5] = {1001, 1002, 1003, 1004, 1005}, score[5] = {80, 0, 7, 100, 49};
    for(i = 0; i < 5; ++i){
            printf("Student name: %s\t", name[i]);
            printf("Student number: %d\t", student_number[i]);
            printf("Student score: %d\t", score[i]);
            printf("%s\t", convert_score(90));
            printf("Student conduct: %c\n", conduct[i]);
            printf("%s\t%d\n", name[i], student_number[i]);
    }

    return 0;
}
