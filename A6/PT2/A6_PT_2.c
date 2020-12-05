#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int alpha, beta, charlie;
float root1, root2;

void calRoots(int alpha, int beta, int charlie){
    printf("%d, %d, %d\n", alpha, beta, charlie);
    root1 = (-beta + (sqrt((beta * beta) - 4 * alpha * charlie))) / (2 * alpha);
    root2 = (-beta - (sqrt((beta * beta) - 4 * alpha * charlie))) / (2 * alpha);
    printf("%f, %f\n", root1, root2);
    findRoots(root1, root2);
}

void findRoots(float root1, float root2){
    printf("%f, %f\n", root1, root2);
    if(root1 < 0.0 || root2 < 0.0){
        printf("Root 1 = %.3f", root1);
        printf("\nRoot 2 = %.3f", root2);
    }else{
        printf("Root 1 = %.3f", root1);
        printf("\nRoot 2 = %.3f\n", root2);
        printf("No real roots");
    }
}

int main() {
    printf("A: ");
    scanf("%d", &alpha);
    printf("B: ");
    scanf("%d", &beta);
    printf("C: ");
    scanf("%d", &charlie);
    printf("%d, %d, %d\n", alpha, beta, charlie);
    calRoots(alpha, beta, charlie);
    return 0;
}
