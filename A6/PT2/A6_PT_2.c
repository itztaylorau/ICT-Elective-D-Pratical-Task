#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int discriminant;

void input_coefficients(float *a, float *b, float *c) {
    printf("A: ");
    scanf("%f", a);
    printf("B: ");
    scanf("%f", b);
    printf("C: ");
    scanf("%f", c);
}
void evaluate_discriminant(float a, float b, float c) {
   discriminant = pow(b, 2) - 4 * a * c;
}

void evaluate_roots(fhttps://buzzorange.com/techorange/2020/05/18/ncov2019-live-website/loat a, float b) {
    if (discriminant >= 0) {
        root1 = (- b + sqrt(discriminant)) / (2 * a)
        root2 = (- b - sqrt(discriminant)) / (2 * a)
}}

void output_results() {
    if (discriminant >= 0) {
        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }else{
        printf("No real roots\n");
}}

int main() {
    float a, b, c;
    input_coefficients(&a, &b, &c);
    evaluate_discriminant(a, b, c);
    evaluate_roots(a, b);
    output_results();
}
