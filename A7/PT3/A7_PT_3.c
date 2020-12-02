#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {
    char *name[] = {"Alice", "Mary", "John", "Sakura", "Kathy", "Hinata", "Miyawaki", "John", "Miyawaki", "Katy", "Sakura", "kathy"};
    char target_name[10];
    int i, position, continueflag;

    printf("Enter a name to be searched: ");
    scanf("%s", & target_name);
    continueflag = 1;
    position = -1;
    i = 0;
    while(position == -1 && i < 13){
        if(strcmp(target_name, name[i]) == 0){
            position = i;
        }i++;
    }
    if (position >= 0) {
        printf("%s matches the name at index %d of the array.\n", target_name, position);
    } else {
        printf("%s is not found in the array.\n", target_name);
    }
    return 0;
}
