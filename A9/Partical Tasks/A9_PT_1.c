#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, j = 0, k = 0;
    char *name[5] = {"Peter", "Mary", "John", "Bob", "Kathy"} , conduct[5] = {'B', 'C', 'A', 'C', 'B'}, *string_score[5][3], add_zero[2];
    int student_number[5] = {1001, 1002, 1003, 1004, 1005}, score[5] = {80, 0, 7, 100, 49};
    for(i = 0; i < 5; ++i){



            printf("Student name: %s\t", name[i]);
            printf("Student number: %d\t", student_number[i]);
            printf("Student score: %d\t", score[i]);
            for(j = 0; j < 2; ++j){
             itoa(score[i], string_score[i], 10);
                         printf("Student score: %d\t", string_score[i]);
            }

            printf("Student conduct: %c\n", conduct[i]);
            printf("%s\t%d\n", name[i], student_number[i]);
    }

    return 0;
}
