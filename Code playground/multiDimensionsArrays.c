#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chessboard[3][4];
    int i, j;
    char chess;

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
            chessboard[i][j] = '\0';

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++) {
            printf("Row %d Column %d chess = ", i + 1, j + 1);
            scanf(" %c", &chess);
            chessboard[i][j] = chess;
        }

    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 3; j++)
            printf("%c\t", chessboard[i][j]);
        printf("\n");
    }

    return 0;
}
