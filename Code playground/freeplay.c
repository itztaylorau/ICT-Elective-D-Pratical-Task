#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
