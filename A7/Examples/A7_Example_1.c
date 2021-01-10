#include <stdio.h>
#include <stdlib.h>
int main() {
    int marks[10], i;
    for(i = 0; i < 10; i++){
        marks[i] = 0;
        printf("Student %d scores: ", i);
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < 10; i++){
        printf("%d\n", marks[i]);
    }
    return 0;
}
