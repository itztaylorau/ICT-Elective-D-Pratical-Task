#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Declare constant */
    int i, startvalue, endvalue;

    /* Asking for value */
    printf("Starting value: ");
    scanf("%d", &startvalue);
    printf("Terminating value: ");
    scanf("%d", &endvalue);

    /* Start processing */
    if(startvalue < endvalue) {
    for (i = startvalue; i <= endvalue; i++){
       printf("%d\n",i);
    }} else if(startvalue > endvalue) {
    for (i = endvalue; i <= startvalue; i--){
       printf("%d\n",i);
       }} else {
        printf("%d\n", startvalue);
       }

    return 0;
}
