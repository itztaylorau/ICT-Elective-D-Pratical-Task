#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float root1, root2;

void calRoots(int alpha, int beta, int charlie){
    root1 = (-beta + (sqrt((beta * beta) - 4 * alpha * charlie))) / (2 * alpha);
    root2 = (-beta - (sqrt((beta * beta) - 4 * alpha * charlie))) / (2 * alpha);
    return root1, root2;
}

void findRoots(){
    if(root1 < 0.0 || root2 < 0.0){
        printf("\nRoot 1 = %.3f", root1);
        printf("\nRoot 2 = %.3f", root2);
    }else{
        printf("No real roots");
    }
}

int main() {
    int alpha, beta, charlie;
    printf("A: ");
    scanf("%d", &alpha);
    printf("B: ");
    scanf("%d", &beta);
    printf("C: ");
    scanf("%d", &charlie);
    calRoots(alpha, beta, charlie);
    findRoots(root1, root2);
    return 0;
}
