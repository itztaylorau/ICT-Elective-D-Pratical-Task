#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, root1, root2;
int discriminant;
void input_coefficients() {
   printf("A: ");
   scanf("%f", &a);
   fflush(stdin);
   printf("B: ");
   scanf("%f", &b);
   fflush(stdin);
   printf("C: ");
   scanf("%", &c);
}
void evaluate_discriminant() {
   discriminant = pow(b, 2) - 4 * a * c;
}
void evaluate_roots() {
    if (discriminant >= 0) {
        root1 = (- b + sqrt(discriminant)) / (2 * a);
        root2 = (- b - sqrt(discriminant)) / (2 * a);
    }
}
void output_results() {
    if (discriminant >= 0) {
        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }else{
        printf("No real roots\n");
    }
}
int main() {
   input_coefficients();
   evaluate_discriminant();
   evaluate_roots();
   output_results();
}
