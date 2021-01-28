/* Chapter A9 Example 3 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    FILE *outfile;
    char fruit_name[30];
    float fruit_price;

    outfile = fopen("X:\\Output.txt", "w");
    for (i = 0; i < 5; ++i){
	    printf("Fruit %d name: ", i+1);
	    scanf("%s", fruit_name);
	    printf("Fruit %d price: ", i+1);
	    scanf("%f", &fruit_price);

	    fprintf(outfile, "%s\t%.1f\n", fruit_name, fruit_price);
    }
    return 0;
}
