#include <stdio.h>

int main() {
    int x = 5;
    int result;

    printf("Initial x = %d\n\n", x);

    // 1. Pre-increment (++x): x is updated (5 -> 6) then used (6 * 10).
    result = ++x * 10;
    printf("++x * 10:\n  Result = %d\n  x is now = %d\n\n", result, x);

    // Reset x
    x = 5;

    // 2. Post-increment (x++): x is used (5 * 10) then updated (5 -> 6).
    result = x++ * 10;
    printf("x++ * 10:\n  Result = %d\n  x is now = %d\n", result, x);

    return 0;
}