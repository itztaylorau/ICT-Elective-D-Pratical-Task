//Credit: Kinson1012
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define FALSE 0
#define TRUE 1

void display_names(char name[10][10],int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%s\t", name[i]);
    printf("\n");
}

int main()
{
    char name[10][10] = {"PETER", "MARY", "JOHN", "BOB", "KATHY","DAVID", "ALAN", "SUSAN", "FIONA", "WILLIAM"};
    int i, j, shifting;
    char next_element[10];

    printf("Initial: ");
    display_names(name, N);

    for (i = 1; i < N; i++) {
        strcpy(next_element, name[i]);
        j = i - 1;
        shifting = TRUE;

        while (j >= 0 && shifting)
            if (strcmp(name[j],next_element)==1) {
               strcpy(name[j+1],name[j]);
               j -= 1;
            }
            else
               shifting = FALSE;

        strcpy(name[j + 1],next_element);
        printf("Pass %d : ", i);
        display_names(name, N);
    }

    return 0;
}

