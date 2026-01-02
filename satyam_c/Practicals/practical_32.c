#include <stdio.h>

void calculate(float a, float b, float *add, float *sub, float *mul, float *div) {
    *add = a + b;
    *sub = a - b;
    *mul = a * b;
    if (b != 0) *div = a / b;
    else *div = 0; // Basic error handling for division by zero
}

int main() {
    float n1, n2, sum, diff, prod, quotient;
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    
    calculate(n1, n2, &sum, &diff, &prod, &quotient);
    
    printf("Addition: %.2f\nSubtraction: %.2f\nMultiplication: %.2f\nDivision: %.2f\n", sum, diff, prod, quotient);
    
    return 0;
}