/* WARNING! THIS PROGRAM IS DEPRECATED! */
/* This example has been modified for exam prepare usage */
#include <stdio.h>
#include <stdlib.h>

int i;
char *info_name[4];

int main() {

    for(i = 0; i < 5; i++){
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", info_name[i]);
        printf("%s", info_name[i]);
    }

    return 0;
}
