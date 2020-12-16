#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[80];

    printf("Enter name:");
    scanf("%s", name);
    printf("Length of name = %d\n", strlen(name));
    return 0;
}
