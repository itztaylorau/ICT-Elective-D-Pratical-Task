#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    /* declare constant */
    int alpha, beta, charlie;
    float root1, root2;

    /* asking user input value */
    printf("A: ");
    scanf("%d", &alpha);
    printf("B: ");
    scanf("%d", &beta);
    printf("C: ");
    scanf("%d", &charlie);

    /* calculating part */
    /* calculating root1 */
    root1 = (-beta + (sqrt((beta * beta) - 4 * alpha * charlie))) / (2 * alpha);
    /* calculating root2 */
    root2 = (-beta - (sqrt((beta * beta) - 4 * alpha * charlie))) / (2 * alpha);

    /* showing calculated result to client */
    printf("Root 1 = %.3f", root1);
    printf("\nRoot 2 = %.3f", root2);

    return 0;
}
