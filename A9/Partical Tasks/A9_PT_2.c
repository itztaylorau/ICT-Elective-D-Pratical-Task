#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char line_string[20],money[6];
    FILE *infile;
    float price,total=0;

    infile = fopen("assets\\ParticalTask2_source.txt", "r");

    while (fgets(line_string, 20, infile) !=NULL) {
        printf("%s", line_string);
        strncpy(money,&line_string[10],5);
        price=atof(money);
        total=total+price;
    }

    printf("\nTotal cost = %.1f\n",total);

    fclose(infile);
    return 0;
}
