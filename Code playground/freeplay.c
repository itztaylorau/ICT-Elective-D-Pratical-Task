#include <stdio.h>
#include <stdlib.h>

void main() {
    char str[10] = "Peter 1";
    int i;
    for(i = 0; i < 10; i++){
        printf("%c(%d) ------ %d\n", str[i], &str[i]);
    }
    printf("\n%d\n", str);
    return 0;
}
