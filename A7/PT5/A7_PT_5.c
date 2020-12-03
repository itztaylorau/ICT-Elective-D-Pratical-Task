#include <stdio.h>
#include <stdlib.h>
int main() {

    int raw_seatInfo[3][4];
    int x, y,tempData, revenue;
    char *displayClass[3] = {"First", "Business", "Economy"};
    int priceClass[3] = {5000, 2500, 1000};

    for(x = 0; x <= 2; x++){
        for(y = 0; y <= 3; y++){
            raw_seatInfo[x][y] = 0;
        }
    }
    printf("For the following input, please use 0 represent not sold and 1 represent sold.\n");
    for(x = 0; x <= 2; x++){
        for(y = 0; y <= 3; y++){
                printf("%s Class - Seat no. %d -- ticket sold:", displayClass[x], y + 1);
                scanf("%d", &raw_seatInfo[x][y]);
        }
    }
    printf("\nOverview Table:\n");
    for(x = 0; x <= 2; x++){
            printf("%s class:\t", displayClass[x]);
            for(y = 0; y <= 3; y++){
                printf("%d\t", raw_seatInfo[x][y]);
    }
    printf("\n");
    }
    for(x = 0; x <= 2; x++){
        for(y = 0; y <= 3; y++){
            revenue = revenue + priceClass[x] * raw_seatInfo[x][y];
        }
    }
    printf("\nTotal revenue = %d\n", revenue);

    return 0;
}
