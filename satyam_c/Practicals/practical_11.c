#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three numbers (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Nested if-else logic to find the largest
    if (a >= b) {
        // If a is greater than or equal to b, we compare a with c
        if (a >= c) {
            printf("%.2f is the largest number.\n", a);
        } else {
            // If a < c, then c is the largest
            printf("%.2f is the largest number.\n", c);
        }
    } else {
        // If a < b, we compare b with c
        if (b >= c) {
            printf("%.2f is the largest number.\n", b);
        } else {
            // If b < c, then c is the largest
            printf("%.2f is the largest number.\n", c);
        }
    }

    return 0;
}