#include <stdio.h>
#include <stdlib.h>

int num[21];
int count, i;

void main()
{
    num[1]=1;
    num[2]=1;
    printf("Number of fibonacci numbers required  (maximum 20)");
    scanf("%d",&count);
    for(i=3;i<=count;i++)
        num[i]=num[i-1]+num[i-2];

    for(i=1;i<=count;i++){
        printf("%d\t",num[i]);
        if(i>1)
            printf("%.4f",(float) num[i]/num[i-1]);
        printf("\n");
    }
}
