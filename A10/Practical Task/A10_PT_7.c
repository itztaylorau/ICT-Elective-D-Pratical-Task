//Credit: Kinson1012
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

void display_name_array(char x[][10], int size)
{
   int i;

   for (i = 0; i < size; i++)
       printf("%s\t", x[i]);
   printf("\n");
}

void merge_two_lists(char array[][10], int left, int mid_point, int right)
{
    int z[N][10];
    int x_marker, y_marker, z_marker;
    x_marker = left;
    y_marker = mid_point;
    z_marker = left;

    while (x_marker < mid_point && y_marker < right)
        if (strcmp(array[x_marker],array[y_marker])<=0)
           strcpy(z[z_marker++],array[x_marker++]);
        else
          strcpy(z[z_marker++],array[y_marker++]);

    while (x_marker < mid_point)
        strcpy(z[z_marker++],array[x_marker++]);

    while (y_marker < right)
        strcpy(z[z_marker++],array[y_marker++]);

    for (z_marker = left; z_marker <= right - 1; z_marker++)
        strcpy(array[z_marker],z[z_marker]);
}

void merge_sort(char array[][10], int left, int right)
{
    int mid_point;

    if (left < right) {
       mid_point = (left + right) / 2;

       merge_sort(array, left, mid_point);

       merge_sort(array, mid_point + 1, right);

       merge_two_lists(array, left, mid_point + 1, right + 1);
    }

    display_name_array(array, N);
}

int main()
{
    char X[N][10]={"WILLAM","MARY","FIONA","DAVID","ALAN","SUSAN","PETER","KATHY","JOHN","BOB"};

    merge_sort(X, 0, N - 1);
    return 0;
}
