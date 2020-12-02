#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, x, y;
    int raw_seatInfo[12];
    char *planeClass[3] = {"First Class", "Business Class", "Economy Class"};
    printf("Please enter 0 for sold or 1 for not yet sold.\n");
        for(x = 0; x < 3; x++){
            for(i = 1; i < 5; i++){

            printf("%s - seat no. %d: \n", planeClass[x], i);
            for(y = 0; y < 12; y++){
                scanf("%d", &raw_seatInfo[y]);
            }

            }
        }
        return 0;
}
