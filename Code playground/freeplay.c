#include <stdio.h>
#include <stdlib.h>

int main() {

    char *name[] = {"Peter", "Mary", "John", "Bob", "Kathy"};
    int i;

    for(i = 0; i < 6; i++){
        printf("%s\n", name[i]);
    }
return 0;
}
