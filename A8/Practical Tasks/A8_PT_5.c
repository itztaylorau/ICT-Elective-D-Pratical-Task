#include <stdio.h>
#include <stdlib.h>

void main() {
    char name[90];
    int i = 0;

    printf("Enter the organization full name: ");
    gets(name);

    while (name[i] != '\0') {
        if ((i == 0 || name [i-1] == ' ') && (name[i] != ' ')) {
            printf("%c.", name[i] - (name[i] >= 97) * 32);
        }
        ++i;
    }

    return 0;
}
