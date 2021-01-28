/* Chapter A9 Example 1 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *outfile;

    outfile = fopen("X:\\Output.txt", "w");

    fprintf(outfile, "This is 1st line");
    fprintf(outfile, "2nd line");

    fclose(outfile);

    return 0;
}
