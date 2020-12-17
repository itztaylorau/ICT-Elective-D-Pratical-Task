#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int discriminant;

int main() {
   input_coefficients();
   evaluate_discriminant();
   evaluate_roots();
   output_results();
}
void input_coefficients() {
   float a, b, c;
   printf("A: ");
   scanf("%f", &a);
   printf("B: ");
   scanf("%f", &b);
   printf("C: ");
   scanf("%f", &c);
   evaluate_discriminant();
   evaluate_roots();
}
void evaluate_discriminant() {
   discriminant = pow(b, 2) - 4 * a * c;
}
void evaluate_roots() {
    if (discriminant >= 0) {
        root1 = (- b + sqrt(discriminant)) / (2 * a);
        root2 = (- b - sqrt(discriminant)) / (2 * a);
}}

void output_results() {
    if (discriminant >= 0) {
        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
   }else{
        printf("No real roots\n");
}}

