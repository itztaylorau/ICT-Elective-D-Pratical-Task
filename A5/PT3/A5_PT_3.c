#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Declare constant */
    int i, ii;

    /* Start output */
    for(i = 9; i > 0; i--){
    for(ii = i; ii > 0; ii--){

        printf("%d", ii);

    }
        printf("\n");
    }
    return 0;
}
