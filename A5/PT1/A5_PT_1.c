#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, startvalue, endvalue;


    printf("Starting value: ");
    scanf("%d", &startvalue);
    printf("Terminating value: ");
    scanf("%d", &endvalue);

    if(startvalue < en`dvalue) {

    for (i = startvalue; i <= endvalue; i++)
       printf("%d\n",i);

    } else if(startvalue > endvalue) {

    for (i = endvalue; i <= startvalue; i--)
       printf("%d\n",i);

       } else {

        printf("%d\n", startvalue);

       }


    return 0;
}
