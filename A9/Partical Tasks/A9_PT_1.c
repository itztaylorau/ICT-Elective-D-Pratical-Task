#include <stdlib.h>
#include <stdio.h>



int main() {
    FILE *outfile;
    int i;
    char *name[5] = {"Peter", "Mary", "John", "Bob", "Kathy"} , conduct[5] = {'B', 'C', 'A', 'C', 'B'};
    int student_number[5] = {1001, 1002, 1003, 1004, 1005}, score[5] = {80, 0, 7, 100, 49};

    outfile = fopen("X:\\Output.txt", "w");
    for(i = 0; i <= 5; ++i){
            printf("A %d", score[i]);
            score[i] = covert_score(itoa(score[i], score[i], 10));
            printf("F %d", score);
            fprintf("%s\t\t%d%s%c\n", name[i], student_number[i], score[i], conduct[i]);
    }

    fclose(outfile);
    return 0;
}
