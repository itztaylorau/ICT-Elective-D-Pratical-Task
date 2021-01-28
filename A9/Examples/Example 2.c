/* Chapter A9 Example 2 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char i_str[3], sentence[20];
    FILE *outfile;

    outfile = fopen("X:\\Output.txt", "w");

    for(i = 1; i <= 10; ++i){
        strcpy(sentence, "This is line no. ");
        itoa(i, i_str, 10);
        strcat(sentence, i_str);

        fprintf(outfile, "%s\n", sentence);
    }

    fclose(outfile);
    return 0;
}
