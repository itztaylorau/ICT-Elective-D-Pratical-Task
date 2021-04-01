#include <stdio.h>
#include <stdlib.h>
void swap(int *first, int *second){
    int tmp;
    tmp = *first;
    *first = *second;
    *second = tmp;
}
int main() {
    int first, second;
    printf("Enter 1st integer: ");
    scanf("%d", &first);
    printf("Enter 2 nd integer: ");
    scanf("%d", &second);
    printf("1st integer = %d\t 2nd integer = %d\n", first, second);
    if(first < second){ swap(&first, &second); }
    printf("1st integer = %d\t 2nd integer = %d\n", first, second);
    return 0;
}
