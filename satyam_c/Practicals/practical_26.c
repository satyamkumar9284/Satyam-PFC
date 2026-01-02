#include <stdio.h>

// Function to calculate factorial
long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    long long result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Factorial is not defined for negative numbers
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        result = findFactorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }

    return 0;
}